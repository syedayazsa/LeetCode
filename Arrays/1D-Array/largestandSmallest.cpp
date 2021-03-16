#include<iostream>
#include<climits>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("/Users/ayaz/Desktop/InterviewPrep/input.txt", "r", stdin);
  freopen("/Users/ayaz/Desktop/InterviewPrep/output.txt", "w", stdout);
#endif

    int arr[1000];

    int largest = INT_MIN;
    int smallest = INT_MAX;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        //USING INBUILT max() and min() functions
       largest = max(largest, arr[i]);
       smallest = min(smallest, arr[i]);
    }
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
}