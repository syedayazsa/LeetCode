#include<iostream>
#include<vector>
#include<string>


//Author: Syed Ayaz Imam
using namespace std;
typedef long long int ll;

void merge(int *a, int s, int e)
{
	int mid = (s + e) / 2;
	int i, j, k;
	int temp[100];
	i = s;
	j = mid;
	k = s;

	while (i <= mid and j <= e)
	{
		if (a[i] < a[j])
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}
	while (i <= mid)
	{
		temp[k++] = a[i++];
	}
	while (j <= e)
	{
		temp[k++] = a[j++];
	}
	for (int i = s; i < e; i++)
		a[i] = temp[i];
}

void mergeSort(int arr[], int s, int e)
{
	//Base case: If array has only one element
	if (s >= e)
		return;
	//Else follow 3 steps
	//1st Divide the array
	int mid = (s + e) / 2;

	//2nd: Sort the both parts
	mergeSort(arr, s, mid);
	mergeSort(arr, mid + 1, end);

	//3rd: Merge both parts
	merge(arr, s, e);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[100];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	mergeSort(a, 0, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout <<  endl;
}