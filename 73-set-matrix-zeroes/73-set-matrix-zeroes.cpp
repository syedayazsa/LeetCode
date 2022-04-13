class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        bool cUpdateReq, rUpdateReq;
        cUpdateReq = rUpdateReq= false;
        
        //Checking for pre-existing zeros in row dummy array
        for(int i = 0; i< matrix.size(); i++){
            if(matrix[i][0] == 0) rUpdateReq = true;
        }
    
        //Checking for pre-existing zeros in column dummy array
        for(int i = 0; i< matrix[0].size(); i++){
            if(matrix[0][i] == 0) cUpdateReq = true;
        }

        //Updating the dummy arrays
        for(int i = 1; i < matrix.size(); i++){
            for(int j = 1; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0)
                    matrix[0][j] = matrix[i][0] = 0;
            }
        }

        //Updating the smaller matrix
        for(int i = 1; i < matrix.size(); i++){
            for(int j = 1; j < matrix[0].size(); j++){
                if(matrix[0][j] == 0 or matrix[i][0] == 0)
                    matrix[i][j] = 0;
            }
        }
        
        //Updating the rows and cols
        if(cUpdateReq == true){
            for(int i = 0; i < matrix[0].size(); i++){
                matrix[0][i] = 0;
            }
        }
        if(rUpdateReq == true){
            for(int i = 0; i < matrix.size(); i++){
                matrix[i][0] = 0;
            }
        
        }
    }
};