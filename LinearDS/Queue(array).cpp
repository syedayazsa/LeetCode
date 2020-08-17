
#include <iostream>

using namespace std;

//ARRAY REPRESENTATION OF QUEUE

class Queue {
private:
	int front;
	int rear;
	int size;
	int *Q;

public:
	Queue(int size);
	~Queue();
	void enqueue(int x);
	int dequeue();
	bool isFull();
	bool isEmpty();
	void display();
};

Queue :: Queue(int size)
{
	this -> size = size;
	front  = -1;
	rear = -1;
	Q = new int[size];
}

Queue :: ~Queue()
{
	delete [] Q;
}

bool Queue :: isEmpty()
{
	return front == rear;
}

bool Queue :: isFull()
{
	if (rear == size - 1)
		return true;
	return false;
}

void Queue :: enqueue(int x)
{
	if (isFull())
		cout << "Queue Overflow" << endl;
	else
	{
		rear = rear + 1;
		Q[rear] = x;
	}
}

int Queue :: dequeue()
{
	int x = -1;
	if (isEmpty())
	{
		cout << "Queue Underflow" << endl;
	}

	else
	{
		front += 1;
		x = Q[front];
	}
	return x;
}

void Queue :: display()
{
	for (int i = front + 1; i <= rear; i++)
	{
		cout << Q[i];
		if (i < rear)
			cout << "<-";
	}
	cout << endl;
}




int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int A[] = {1, 3, 5, 7, 9};

	Queue q(sizeof(A) / sizeof(A[0]));

	// Enqueue
	for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
		q.enqueue(A[i]);
	}

	// Display
	q.display();

	// Overflow
	q.enqueue(10);

	// Dequeue
	for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
		q.dequeue();
	}

	// Underflow
	q.dequeue();

	return 0;
}