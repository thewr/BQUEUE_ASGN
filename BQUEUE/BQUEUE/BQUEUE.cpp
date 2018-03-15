#include "BQUEUE.h"

using namespace std;


BQUEUE::BQUEUE() 
{
	cout << "Default Constructor Envoked!" << endl;
	//intialize empty que
	front->next = front;//0; //front->prev == back
	front->prev = front;//0;
	front = 0; 
}


BQUEUE::~BQUEUE()
{
	cout << "~QUEUE has been called\n";
	while (!Empty())
	{
		Dequeue();
	}
}

BQUEUE::BQUEUE(const BQUEUE & B)
{
	//if (Empty())
	//{
	//	front = back = new bqnode;
	//	front->data = item;
	//}
	//else
	//{
	//	back->next = new bqnode;
	//	back->next->prev = back;
	//	back = back->next;
	//	back->data = item;
	//}
}

void BQUEUE::Enqueue(int) 
{
	if (Empty())
	{
	front = new bqnode; //front = back = new bqnode;
	front->next = front;
	front->prev = front;
	front->data = item; //front->data = item;
	}
	else
	{ 
	front->prev->next = new bqnode;  //back->next = new bqnode;
	front->prev->next->prev = front->prev; //back->next->prev = back;
	front->prev=front->prev->next; //back = back->next;
	front->prev->data=item;  //back->data = item;
	}
}

void BQUEUE::Dequeue() 
{
	if (!Empty())
	{
		bqnode *p = front;
		front = front->next;
		if (front != 0)
			front->prev = 0;
		else
			front->prev = 0; //back = 0;
		delete p;
	}
	else
	{
		cout << "Cannot Dequeue because queue is empty\n";
	}
}

void BQUEUE::Print()
{
	//bqnode *p = front;
	////bqnode *p = back;

	//while (p != 0)
	//{
	//	cout << p->data << endl;
	//	p = p->next;
	//	//p=p->prev;
	//}
}
