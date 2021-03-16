#include<iostream>

using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[5];
	for (int i = 0; i < 10; i++)
		cout << arr[i] << ", ";

	int size = sizeof(arr) / sizeof(int);
	cout << "Size of arr" << "---------" << endl;

	cout << size;
}