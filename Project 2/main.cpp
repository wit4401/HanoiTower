#include<stdio.h>
#include<iostream>
#include"HanoiStack.h"

void solveHanoi(int,int,int,int);

int main(){
	int moves=0;
	int val=0;
	bool play=true;

	puts("");
	while (val>6||val<2){
		printf("How many disks: ");
		std::cin>>val;
		if(val>6||val<2)
			puts("Invalid Option (2-6)");
	}

	HanoiStack hOne = HanoiStack(val);
	HanoiStack hTwo;
	HanoiStack hThree;
	hTwo.setLen(val);
	hThree.setLen(val);
	
	char cho='1';
	while(cho !='n'&&cho!='N'&&cho!='y'&&cho!='Y'){
		puts("Would you like to see the optimal solution?");
		std::cin>>cho;
		puts("");
		if (cho=='y'||cho=='Y'){
			solveHanoi(val,1,3,2);
			puts("");
		}
		else if(cho!='n'&&cho!='N')
			puts("Invalid Input\n");
	}
	while (play){
		puts("Tower 1:");
		hOne.printTower();
		puts("Tower 2:");
		hTwo.printTower();
		puts("Tower 3:");
		hThree.printTower();
		puts("");

		int num2;
                printf("Remove from tower ");
                std::cin>>num2;

		int num1;
		printf("Add to tower ");
		std::cin>>num1;
		
		bool moved;
		if (num1==num2||num1>3||num2>3||num1<1||num2<1)
			puts("Invalid Move");
		if (num1==1&&num2==2){
			moved=hOne+=hTwo;
			if (moved)
				moves++;
		}
		if (num1==2&&num2==1){
			moved=hTwo+=hOne;
			if (moved)
				moves++;
		}
		if (num1==1&&num2==3){
			moved=hOne+=hThree;
			if (moved)
				moves++;
		}
		if (num1==3&&num2==1){
			moved=hThree+=hOne;
			if (moved)
				moves++;
		}
		if (num1==2&&num2==3){
			moved=hTwo+=hThree;
			if (moved)
				moves++;
		}
		if (num1==3&&num2==2){
			moved=hThree+=hTwo;
			if (moved)
				moves++;
		}

		if (hThree.checkGame()){
			play=false;
			puts("");
			puts("Tower 1:");
                	hOne.printTower();
                	puts("Tower 2:");
                	hTwo.printTower();
                	puts("Tower 3:");
                	hThree.printTower();
			printf("\nWinner! Moves made: %d\n",moves);
		}
	}
	puts("--------------------------------");
	return 0;
}

void solveHanoi(int val,int from,int to,int tmp){
	if (val>0){
		solveHanoi(val-1,from,tmp,to);
		printf("Move disk %d from %d to %d\n",val,from,to);
		solveHanoi(val-1,tmp,to,from);	
	}
}
