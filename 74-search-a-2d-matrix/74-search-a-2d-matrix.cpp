class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int column = matrix[0].size();
        
        int i, j;
        i = 0; j = column - 1;
        
        while(i < rows and j >= 0){
            if(matrix[i][j] == target) return true;
            if(matrix[i][j] > target) j--;
            else i++;
        }
        return false;
    }
};

