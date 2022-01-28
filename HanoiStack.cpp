#include<stdio.h>
#include<iostream>
#include"HanoiStack.h"

HanoiStack::HanoiStack(){
	head = nullptr;
	len=0;
}

HanoiStack::HanoiStack(int n){
	head=nullptr;
	len=n;
	for (int i=n;i>0;i--)
		push(i);
}

HanoiStack::~HanoiStack(){
	if (head==nullptr)
		return;
	for(DiskNode *tmp,*scan=head;scan;scan=tmp){
		tmp=scan->next;
		delete scan;
	}
}

HanoiStack::HanoiStack(const HanoiStack& val){
	HanoiStack tmp;
	head=nullptr;
	len=val.len;
	for (DiskNode* scan=val.head;scan;scan=scan->next)
		tmp.push(scan->num);
	for (DiskNode* scan=tmp.head;scan;scan=scan->next)
		push(scan->num);
}

//This assignment operator has some error in this,
//but it is not essential, but it should be noted
//that this doesn't work fully as intended
HanoiStack HanoiStack::operator=(const HanoiStack& val){
	HanoiStack curr = *this;
	HanoiStack tmp;
	int n = curr.len;
	for(int i=n;i>0;i--)
		curr.pop();
	curr.head=nullptr;
	tmp.head=nullptr;
	for(DiskNode* scan=val.head;scan;scan=scan->next)
		tmp.push(scan->num);
	for(DiskNode* scan=tmp.head;scan;scan=scan->next)
		curr.push(scan->num);
	curr.setLen(0);
	curr.setLen(val.len);
	return curr;
}

bool HanoiStack::operator+=(HanoiStack& val){
	bool valid=true;
	if (!val.head){
		puts("Invalid Move");
		return false;
	}
	if (!this->head){
		this->push(val.pop());
		return true;
	}
	else if(this->head->num > val.head->num){
                this->push(val.pop());
		return true;
	}
	else{
		puts("Invalid Move");
		return false;
	}
}

void HanoiStack::push(int val){
	DiskNode* newDisk=new DiskNode;
        DiskNode* tmp;

        newDisk->num=val;
	newDisk->next=nullptr;
	if(!head)
		head = newDisk;
	else{
		tmp=head;
		head=newDisk;
		newDisk->next=tmp;
	}
}

int HanoiStack::pop(){
	DiskNode* tmp;
	if (!head){
		puts("Tower is Empty!");
		return -1;
	}
	int retval = head->num;
	if (!head->next){
		head=nullptr;
		return retval;
	}
	tmp = head->next;
	delete head;
	head=tmp;
	return retval;
}

void HanoiStack::printTower(){
	bool check=false;
	if (!head){
		for (int i=len;i>0;i--){
			for(int j=len;j>0;j--)
				printf(" ");
			puts("|");
		}
		for (int i=len*2;i>0;i--)
			printf("-");
		printf("-");
		puts("");
		return;
	}

	int n=0;
	for(DiskNode* track=head;track;track=track->next)
		n++;
	int space = len-n;
	for (int i=space;i>0;i--){
		for (int j=len;j>0;j--)
			printf(" ");
		puts("|");
	}
	DiskNode* scan=head;
	while(scan){
		for(int i=len;i>0;i--){
			if (i==scan->num)
				check=true;
			if (check)
				printf("*");
			else
				printf(" ");
		}
		printf("|");
		for(int i=0;i<len;i++){
			if  (i==scan->num)
				check=false;
                        if (check)
                                printf("*");
                        else
                                printf(" ");
                }
		puts("");
		scan=scan->next;
	}
	for (int i=len*2;i>0;i--)
		printf("-");
	printf("-");
	puts("");
}

bool HanoiStack::checkGame(){
	if (!head)
		return false;
	int n=1;
	DiskNode* scan = head;
	while(scan->next){
		scan=scan->next;
		n++;
	}
	if (n==len)
		return true;
	else
		return false;
}

void HanoiStack::setLen(int val){
	len=val;
}
