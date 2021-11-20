class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        int row = matrix.length - 1;
        int col = matrix[0].length - 1;
        
        int r = 0;
        int c = matrix[0].length - 1;
        
        while(0 <= r && r <= row && 0 <= c && c <= col){
            if(matrix[r][c] == target) return true;
            else if(matrix[r][c] > target) c--;
            else r++;
        }
        
        return false;
    }
} 