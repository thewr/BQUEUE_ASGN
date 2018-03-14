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
private:
	bqnode * front;	// use only one pointer
};


#endif
