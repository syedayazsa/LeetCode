//From the given array, find the maximum sum and the subarray


#include<iostream>

using namespace std;

//Brute-Force Method (3 Nested Loops) - O(N^3)
void maxSumArray()
{
    int n;
    cin >> n;
    int arr[1000];

    for(int i = 0; i<n; i++)
    {
        cin >>  arr[i];
    }
    int msum = 0; // Maximum Sum
    int csum = 0; // Current Sum
    int left = -1;
    int right = -1;

    for(int i = 0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            csum = 0;
            for(int k=i; k<=j; k++)
            {
                csum += arr[k];
            }
            if(csum > msum)
            {
                msum = csum;
                left = i;
                right = j;
            }
        }
    }
    cout << "The Max sum: " << msum << endl;
    cout << "The array is: ";

    for(int k = left; k <= right; k++)
    {
        cout << arr[k] << " ";
    }
}


//Function for Optimized Approach
void usingCumulativeSum()
{
    int n;
    cin >> n;
    int cs[1000] = {0};
    int msum = 0; // Maximum Sum
    int csum = 0; // Current Sum
    int left = -1;
    int right = -1;
    int arr[1000];

    cin >> arr[0];
    cs[0] = arr[0];
    for(int i = 1; i<n; i++)
    {
        cin >>  arr[i];
        cs[i] = cs[i-1] + arr[i];
    }


    for(int i = 0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            csum = 0;
            csum = cs[j] - cs[i-1]; 
            if(csum > msum)
            {
                msum = csum;
                left = i;
                right = j;
            }
        }
    }
    cout << "The Max sum: " << msum << endl;
    cout << "The array is: ";

    for(int k = left; k <= right; k++)
    {
        cout << arr[k] << " ";
    }
}

void kadaneAlgorithm()
{
    int n;
    cin >> n;
    int arr[1000];

    for(int i = 0; i<n; i++)
    {
        cin >>  arr[i];
    }
    int msum = 0; // Maximum Sum
    int csum = 0; // Current Sum
    

    //kadanesAlgorithm
    for(int i=0; i<n; i++)
    {
        csum += arr[i];
        if(csum < 0)
            csum = 0;
        msum = max(msum, csum);
    }
    cout << "The Max. Sum is " << msum;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("/Users/ayaz/Desktop/InterviewPrep/input.txt", "r", stdin);
  freopen("/Users/ayaz/Desktop/InterviewPrep/output.txt", "w", stdout);
#endif

    kadaneAlgorithm();

}