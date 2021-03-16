/*Given an array, generate all possible sub-arrays
NOTE: Only Continuous elements are considered to be subarrays
*/

#include<iostream>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("/Users/ayaz/Desktop/InterviewPrep/input.txt", "r", stdin);
  freopen("/Users/ayaz/Desktop/InterviewPrep/output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[1000];

    for(int i = 0; i<n; i++)
    {
        cin >>  arr[i];
    }



    for(int i = 0; i<n; i++)
    {
        for(int j = i; j<n; j++)
        {
            for(int k = i; k<=j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}