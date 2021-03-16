#include<iostream>

using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<=n-1; i++){
        int e = arr[i];
        //place the current element in the right place of the sorted part
        int j = i-1; //traverses the sorted list backwards
        //eg array = {5, 3, 2, 0, 1} => (e = arr[i] -> 3) & (arr[j] -> 5)
        //refer notes for theory
        while(j>=0 and arr[j]>e) // 5 > 3 ?
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = e;
    }
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

    insertionSort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}