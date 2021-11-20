class Solution {
    public void rotate(int[][] matrix) {
        rotateacw(matrix);
        mirror(matrix);
    }
    
    public void rotateacw(int[][] matrix){
        for(int i = 0; i < matrix.length; i++){
            for(int j = 0; j < matrix[0].length; j++){
                if(j > i){
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
        }
    }
    
    public void mirror(int[][] matrix){
        int cstart = 0;
        int cend = matrix[0].length - 1;
        while(cstart < cend){
            for(int i = 0; i < matrix.length; i++){
                int temp = matrix[i][cstart];
                matrix[i][cstart] = matrix[i][cend];
                matrix[i][cend] = temp;
            }
            cstart++;
            cend--;
        }
    }
}