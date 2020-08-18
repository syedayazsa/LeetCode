#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void calculate()
{
	float a, b;
	cin >> a >> b;
	int val_a, val_b;

	val_a = ceil(float(a / 9));
	val_b = ceil(float(b / 9));
	if (val_a > val_b)
		cout << "1" << " " << val_b << endl;

	else if (val_b > val_a)
		cout << "0" << " " << val_a <<  endl;
	else
		cout << "1" << " " << val_b << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		calculate();
		t--;
	}
}