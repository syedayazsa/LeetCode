//Author: Syed Ayaz
#include<iostream>

using namespace std;

typedef long long int ll;


void permute(char* in, int i)
{
	if (in[i] == '\0')
	{
		cout << in << ", ";
		return;
	}
	//Recursive Case
	for (int j = i; in[j] != '\0'; j++)
	{
		swap(in[i], in[j]);
		permute(in, i + 1);
		//backtracking
		swap(in[i], in[j]);
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char in[100];
	cin >> in;
	permute(in, 0);

}