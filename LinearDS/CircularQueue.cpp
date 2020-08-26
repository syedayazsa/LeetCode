#include<iostream>

using namespace std;

//CIRCULAR QUEUE USING ARRAYS


class CircularQueue {
private:
	int *Q;
	int front;
	int rear;
	int size;

public:
	CircularQueue(int size);
	~CircularQueue();
	void enqueue(int x);
	int dequeue();
	bool isEmpty();
	bool isFull();
	void display();

};

CircularQueue :: CircularQueue(int size)
{
	this -> size = size;
	front = -1;
	rear  = -1;
	Q  = new int[size];
}

CircularQueue :: ~CircularQueue()
{
	delete [] Q;
}

bool CircularQueue :: isEmpty()
{
	return front == rear;
}

bool CircularQueue :: isFull()
{
	if (front == (rear + 1) % size)
		return true;
	return false;
}

void CircularQueue :: enqueue(int x)
{
	if (isFull())
	{
		cout << "Queue Overflow" << endl;
	}
	else
	{
		rear = (rear + 1) % size;
		Q[rear] = x;
	}
}

int CircularQueue :: dequeue()
{
	int value = -1;
	if (isEmpty())
		cout << "Queue Underflow" << endl;
	else
	{
		front  = (front + 1) % size;
		value  = Q[front];
	}
	return value;
}

void CircularQueue :: display()
{
	int i = (front + 1) % size;
	do {
		cout << Q[i];
		if (i < rear)
			cout << "<-";
		i = (i + 1) % size;
	} while (i != (rear + 1) % size);
}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int A[] = {1, 3, 5, 7, 9};

	CircularQueue cq(sizeof(A) / sizeof(A[0]) + 1);

	// Enqueue
	for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
		cq.enqueue(A[i]);
	}

	// Display
	cq.display();
	cout << endl;

	// Overflow
	cq.enqueue(10);

	// Dequeue
	for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
		cq.dequeue();
	}

	// Underflow
	cq.dequeue();

	return 0;
}