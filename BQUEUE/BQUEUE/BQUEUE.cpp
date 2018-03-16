#include "BQUEUE.h"

using namespace std;


BQUEUE::BQUEUE()
{
	cout << "Default Constructor Envoked!" << endl;
	//intialize empty que
	//front->prev = front;
	front = 0;
	//front->next = front;//0; //front->prev == back
	//front->prev = front;//0;	
}


BQUEUE::~BQUEUE()
{
	cout << "~QUEUE has been called\n";
	//while (!Empty())
	//{
	ClearQueue();
	//}
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

void BQUEUE::Enqueue(int item)
{
	if (Empty())
	{
		front = new bqnode; 
		front->prev = new bqnode;//new bqnode;//front;//new bqnode;
		front->next = 0;
		front->prev = 0;
		front->time = item; //front->data = item;
	}
	else
	{
		front->prev->next = new bqnode;  //back->next = new bqnode;
		front->prev->next->prev = front->prev; //back->next->prev = back;
		front->prev = front->prev->next; //back = back->next;
		front->prev->time = item;  //back->data = item;
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
			//else
			//	front->prev = 0; //back = 0;
			delete p;
		}
		else
		{
			cout << "Cannot Dequeue because queue is empty\n";
		}
}

void BQUEUE::ClearQueue()
{
	if (!Empty())
	{
		bqnode *p, *tmp;
		p = front->next;
		while (p != 0)
		{
			tmp = p;
			p = p->next;
			delete tmp;
		}
		front->next = 0;
		front->prev = front;
		//Count = 0;
	}
	else
	{
		cout << "Cannot Dequeue because queue is empty\n";
	}
}

void BQUEUE::Print()
{
	bqnode *p = front;
	//bqnode *p = back;

	while (p != 0)
	{
		cout << p->time << endl;
		p = p->next;
		//p=p->prev;
	}
}
