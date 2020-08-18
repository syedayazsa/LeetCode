#include<iostream>
#include<algorithm>
using namespace std;

void calculate()
{
	long long H, P;
	cin >> H >> P;
	if ((2 * P - H) > 0)
		cout << "1" << endl;
	else
		cout << "0" << endl;
}

int main()
{
	long long t;
	cin >> t;
	while (t > 0)
	{
		calculate();
		t--;
	}
}