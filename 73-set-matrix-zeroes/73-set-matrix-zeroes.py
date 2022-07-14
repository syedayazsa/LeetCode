class Solution(object):
    def setZeroes(self, matrix):
        
        colUpdate = rowUpdate = False
        
        rows = len(matrix)
        cols = len(matrix[0])
        
        for i in range(rows):
            if matrix[i][0] == 0:
                rowUpdate = True
        
        for j in range(cols):
            if matrix[0][j] == 0:
                colUpdate = True
        
        for i in range(1, rows):
            for j in range(1, cols):
                if matrix[i][j] == 0:
                    matrix[i][0] = matrix[0][j] = 0
                
        for i in range(1, rows):
            for j in range(1, cols):
                if matrix[0][j] == 0 or matrix[i][0] == 0:
                       matrix[i][j] = 0
                       
        if colUpdate:
            for i in range(cols):
                matrix[0][i] = 0
        
        if rowUpdate:
            for j in range(rows):
                matrix[j][0] = 0