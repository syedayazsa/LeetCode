#include<iostream>
#include<cmath>
using namespace std;

typedef long long ll;


int binarySearch(int arr[], int l, int r, int x)
{
	int mid = (l + r) / 2;
	if (x > arr[mid])
	{
		return binarySearch(arr, mid, r, x);

	}
	if (x < arr[mid])
	{
		return binarySearch(arr, l, mid, x);
	}
	else
		return mid;
}



int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

}