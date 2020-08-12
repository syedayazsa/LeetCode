#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {20, 40, 40, 40, 70, 90, 100};
	int n = sizeof(arr) / sizeof(int);

	//Binary Search
	int key;
	cin >> key;
	bool present = binary_search(arr, arr + n, key);
	if (present)
		cout << "Present" << endl;
	else
		cout << "Absent" << endl;

	//to get the index
	//use lower_bound and upper_bound

	auto it = lower_bound(arr, arr + n, 40);
	cout << "Lower bound of 40: " << (it - arr); //first ele greater than or equal to key

	//upper_bound method
	//gives first ele that is srictly greater than key
	auto it2 = upper_bound(arr, arr + n, 40);
	cout << endl << "The upper bound of 40 is " << (it2 - arr);


	//frequency
	cout << endl << "The frequency of 40 is " << it2 - it;
}