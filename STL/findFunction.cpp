#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 10, 144, 6, 22};
	int n = sizeof(arr) / sizeof(int);

	//search-->Find

	int key;
	cin >>  key;
	auto it = find(arr, arr + n, key);
	int index = it - arr; // to get the index
	if (index == n)
		cout << "Key element is not present" << endl;
	else
		cout <<  "Key value at: " << index << endl;
}