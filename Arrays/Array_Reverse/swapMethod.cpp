#include<iostream>

using namespace std;

// TIME COMPLEXITY = O(n);
void reverseArray(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    cout << "{";
    for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
    cout <<"}" << endl;
}

int main()
{
    int arr[] = {2, 3, 66, 9};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr, 0, n-1);
    printArray(arr, n);
}