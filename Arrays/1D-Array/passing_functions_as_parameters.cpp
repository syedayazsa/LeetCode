#include<iostream>

using namespace std;

bool compare(int a, int b)
{
    //cout << "Comparing " << a << " and " << b << endl; 
    return a<b;
}

void bubbleSort(int a[], int n, bool(&compare)(int a, int b))
{
    for(int itr = 1; itr <= n-1; itr++)
    {
        for(int j = 0; j<=(n-itr-1); j++)
        {
            if(compare(a[j], a[j+1]))
            {
                swap(a[j], a[j+1]);
            }
        }
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

    bubbleSort(arr, n, compare);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

}