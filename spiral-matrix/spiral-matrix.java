class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> s = new ArrayList<>();
        int r_start, r_end, c_start, c_end;
        r_start = c_start = 0;
        r_end = matrix.length - 1;
        c_end = matrix[0].length - 1;
        
        while(r_start <= r_end && c_start <= c_end){
        //Right Operation
            for(int i = c_start; i<=c_end; i++){
            s.add(matrix[r_start][i]);
            }
            r_start++;
        
        
        //Down Operation
            for(int j = r_start; j<=r_end; j++){
            s.add(matrix[j][c_end]);
            }
            c_end--;
        
        
        //Left Operation
        if(r_start <= r_end){
            for(int k = c_end; k >= c_start; k--){
            s.add(matrix[r_end][k]);
            }
            r_end--;
        }
        
        //Up Operation
        if(c_start <= c_end){
            for(int l = r_end; l >= r_start; l--){
            s.add(matrix[l][c_start]);
            }
            c_start++;
        }
    }
    return s;
    }
}