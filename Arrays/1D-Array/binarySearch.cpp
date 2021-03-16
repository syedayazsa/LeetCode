#include<iostream>

using namespace std;

int binary_search(int arr[], int n, int key)
{
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        int m = (s + e)/2;
        if(arr[m] == key)
        {
            return m;
        }
        else if(arr[m] > key)
        {
            e = m-1;
        }
        else
        {
            s = m+1;
        }
    }
    return -1;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("/Users/ayaz/Desktop/InterviewPrep/input.txt", "r", stdin);
  freopen("/Users/ayaz/Desktop/InterviewPrep/output.txt", "w", stdout);
#endif

    int n, key;
    int arr[1000];
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    cout << "The searched item is at: " << binary_search(arr, n, key) << "th Position.";
}