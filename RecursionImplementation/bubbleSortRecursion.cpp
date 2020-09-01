#include<iostream>
#include<cmath>
using namespace std;

typedef long long ll;

//bubblesort
void bubblesort(int arr[], int n)
{
	//base case
	if (n == 1)
		return;
	for (int j = 0; j < n - 1; j++)
	{
		if (arr[j] > arr[j + 1])
			swap(arr[j], arr[j + 1]);
	}
	bubblesort(arr, n - 1);
}

void bubblesort_recursive(int arr[], int j, int n)
{
	if (n == 1)
		return;
	if (j == -1)
	{
		return bubblesort_recursive(arr, 0, n - 1);
	}
	if (arr[j] > arr[j + 1])
		swap(arr[j], arr[j + 1]);
	return bubblesort_recursive(arr, j + 1, n);

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[] = {4, 3, 2, 1};
	bubblesort_recursive(a, 0, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << a[i];
	}
}