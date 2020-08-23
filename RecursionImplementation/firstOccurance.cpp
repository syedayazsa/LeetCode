#include<iostream>
#include<cmath>
using namespace std;

typedef long long ll;

//for first occurance of a number
int firstOcc(int *a, int n, int key)
{
	if (n == 0)
		return -1;
	if (a[0] == key)
		return 0;
	int i = firstOcc(a + 1, n - 1, key);
	if (i == -1)
		return -1;
	else
		return i + 1;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1, 7, 11, 2, 11, 5};
	int n = sizeof(arr) / sizeof(int);
	cout << firstOcc(arr, n, 11);
}