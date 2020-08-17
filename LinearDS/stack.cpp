#include<iostream>
#include<cstdlib>

using namespace std;

#define SIZE 10

class stack {
	int *arr;
	int top;
	int capacity;


public:
	stack(int size = SIZE);
	~stack();

	void push(int);
	int pop();
	int peek();

	int size();
	bool isEmpty();
	bool isFull();
};

stack :: stack(int size)
{
	arr = new int[size];
	capacity = size;
	top = -1;
}

stack :: ~stack()
{
	delete[] arr;
}


void stack :: push(int x)
{
	if (isFull())
		cout << "Stack Overflow!" << endl;
	else
	{
		cout << "Inserting..." << endl;
		arr[++top] = x;
	}
}

int stack :: pop()
{
	if (isEmpty())
	{
		cout << "Stack Underflow!" << endl;
		exit(EXIT_FAILURE);
	}

	else {
		return arr[top--];
	}
}

int stack :: peek()
{
	if (isEmpty())
	{
		cout << "Nothing to show. Stack Underflow..." << endl;
		return 0;
	}
	else
	{
		return arr[top];
	}
}

bool stack :: isFull()
{
	return top == capacity - 1;
}

bool stack :: isEmpty()
{
	return top == -1;
}


int stack :: size()
{
	return top + 1;
}

int main()
{

	/**#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif**/

	stack S(3);

	S.push(1);
	S.push(4);
	S.push(9);

	S.pop();

	cout << "The top of the element is " << S.peek() <<  endl;

	if (S.isEmpty())
		cout << "Stack is Empty\n";
	else
		cout << "Stack is not Empty\n";
	return 0;
}