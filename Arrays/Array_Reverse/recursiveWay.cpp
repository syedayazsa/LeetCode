#include<iostream>
using namespace std;

// TIME COMPLEXITY = O(n);

void reverseArray(int arr[], int start, int end)
{
        if(start >= end)
            return;
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        //Recursive Call
        reverseArray(arr, start+1, end-1);
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1, 3, 5, 6, 11};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}