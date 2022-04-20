class Solution {
public:
    long long merge(vector<int> &arr, long long temp[], long long left, long long mid, long long right){
    long long i, j, k;
    
    long long inv_count = 0;
 
    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];

            inv_count = inv_count + (mid - i);
        }
    }
 
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];
 
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
 
    return inv_count;
    }
    
    long long mergeSort(vector<int> &arr, long long temp[], long long left, long long right){
    long long mid, inv_count = 0;
    if (right > left) {

        mid = (right + left) / 2;

        inv_count += mergeSort(arr, temp, left, mid);
        inv_count += mergeSort(arr, temp, mid + 1, right);
 
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
    }
    
    bool isIdealPermutation(vector<int>& nums) {
        long long countGlobal, countLocal;
        countLocal = 0;
        long long temp[nums.size()];
        
        for(long long i = 0; i  < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]) countLocal++; 
        }
        
        countGlobal = mergeSort(nums, temp, 0, nums.size() - 1);
        
        cout << countLocal << endl;
        cout << countGlobal << endl;
        if(countLocal == countGlobal) return true;
        return false;
    }
};