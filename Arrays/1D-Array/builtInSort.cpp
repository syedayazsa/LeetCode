#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b)
{
    cout << "Comparing " << a << " and " << b << endl; 
    return a>b;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("/Users/ayaz/Desktop/InterviewPrep/input.txt", "r", stdin);
  freopen("/Users/ayaz/Desktop/InterviewPrep/output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n, compare);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}