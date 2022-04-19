class Solution {
public:
    
    bool binarySearch(vector<vector<int>> &A, int target, int start, int end){
        if(start <= end){
            int mid = (start + end);
            int i = mid/A[0].size();
            int j = mid%A[0].size();
            
            if(target == A[i][j]) return true;
            if(target > A[i][j]) return binarySearch(A, target, mid + 1, end);
            else return binarySearch(A, target, start, mid - 1);
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return binarySearch(matrix, target, 0, matrix.size()*matrix[0].size() - 1);
    }
};

