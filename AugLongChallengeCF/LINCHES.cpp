#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t)
	{
		long long n, k, count = 1000000000, result = -1;
		cin >> n >> k;
		int a[1000];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (int i = 0; i < n; i++) {
			if (k % a[i] == 0) {
				int temp;
				temp = k / a[i];
				if (temp < count) {
					count = temp;
					result = a[i];
				}
			}
		}
		cout << result << endl;
		t--;
	}
	return 0;
}