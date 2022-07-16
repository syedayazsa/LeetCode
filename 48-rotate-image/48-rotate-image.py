class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        
        #Transpose of the matrix
        for i in range(len(matrix)):
            for j in range(i+1):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
                
        #reverse each row
        for array in matrix:
            array.reverse()
            
        