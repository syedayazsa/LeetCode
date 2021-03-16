#include<iostream>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("/Users/ayaz/Desktop/InterviewPrep/input.txt", "r", stdin);
    freopen("/Users/ayaz/Desktop/InterviewPrep/output.txt", "w", stdout);
    #endif

    int n, key;
    int arr[1000];
    cout << "Enter the length of array\n";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key value: \n";
    cin >> key;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            cout << "The key is present at " << i+1 << "th postion." << endl; 
        }
        if(i==n-1)
            cout << "No key!";
    }

}