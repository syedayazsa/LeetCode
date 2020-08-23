#include<iostream>
#include<cmath>
using namespace std;

typedef long long ll;

//for first occurance of a number
int fastPower(int a , int n)
{
	if (n == 0)
		return 1;
	int smaller_ans = fastPower(a, n / 2);
	smaller_ans = smaller_ans * smaller_ans;

	if (n & 1)
	{
		return a * smaller_ans;
	}
	return smaller_ans;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, n;
	cin >> a >> n;
	cout << fastPower(a, n);
}