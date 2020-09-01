//Author: Syed Ayaz
#include<iostream>

using namespace std;

typedef long long int ll;


char words[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void spellings(int n)
{
	if (n == 0)
		return;
	spellings(n / 10);
	int digit = n % 10;
	cout << words[digit] << " ";
	return;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	spellings(2048);
}