#include<iostream>
#include<algorithm>

using namespace std;

void selectionSort(int arr[], int n)
{
    //we are going to use two indexes i and j
    for(int i=0; i<n-1; i++) //we do i<n-1 bcoz when i = n-1, the array is sorted
    {
        int min_idx = i;
        for(int j = i; j<=n-1; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
    swap(arr[i], arr[min_idx]);
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

    selectionSort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

}