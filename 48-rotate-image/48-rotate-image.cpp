class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //swap across diagonal
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(j > i){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
        
        //mirror image
        int mid = matrix[0].size()/2;
        
        for(int c = 0; c < mid; c++){
            for(int r = 0; r < matrix.size(); r++){
                swap(matrix[r][c], matrix[r][matrix.size() - c - 1]);
            }
        }
    }
};