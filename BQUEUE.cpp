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
	//cout << "~QUEUE has been called\n";
	//while (!Empty())
	//{
	//	deQueue();
	//}
}

BQUEUE::BQUEUE(const BQUEUE & B)
{
	//if (Empty())
	//{
	//	front = back = new Qnode;
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
	//if (Empty())
	//{
	//	front = back = new bqnode;
	//	front->data = item;
	//}
	//else
	//{ 
	//	back->next = new bqnode;
	front->prev->next = new bqnode;
	//	back->next->prev = back;
	//	back = back->next;
	//	back->data = item;
	//}
}

void BQUEUE::Dequeue() 
{
	//if (!Empty())
	//{
	//	bqnode *p = front;
	//	front = front->next;
	//	if (front != 0)
	//		front->prev = 0;
	//	else
	//		back = 0;

	//	delete p;
	//}
	//else
	//{
	//	cout << "Cannot deQueue because queue is empty\n";
	//}
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
