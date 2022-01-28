#ifndef HANOISTACK_H
#define HANOISTACK_H
#include<iostream>
class HanoiStack{
	private:
		struct DiskNode{
			int num;
			DiskNode* next;
		};
		DiskNode* head;
		int len;
	public:
		HanoiStack();
		HanoiStack(int);
		~HanoiStack();
		HanoiStack(const HanoiStack&);
		HanoiStack operator=(const HanoiStack&);
		bool operator+=(HanoiStack&);
		void push(int);
		int pop();
		void printTower();
		bool checkGame();
		void setLen(int);
};
#endif
