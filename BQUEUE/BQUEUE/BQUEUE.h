#include <iostream>

using namespace std;

#ifndef BQUEUE_H
#define BQUEUE_H

class bqnode
{
public:
	int time;	//data type contained in node
	bqnode *prev; //pointer to previous(predecessor) node
	bqnode *next; //pointer to next(successor) node 
};

class BQUEUE
{
public:
	BQUEUE();
	~BQUEUE();
	BQUEUE(const BQUEUE & B);
	void Enqueue(int);
	void Dequeue();
	void Print();
	bool Empty() { return front == 0; }
private:
	bqnode *front;	// use only one pointer
};


#endif
