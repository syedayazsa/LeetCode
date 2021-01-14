#include<iostream>

using namespace std;

// TIME COMPLEXITY = O(n)
int main(){
    int n;
    cout << "Enter the number of Elements in the array" << endl;
    cin >> n;
    int arr[n];
    for(int i=n-1; i>=0; i--)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}