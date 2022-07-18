import math
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        return self.binarySearch(matrix, 0, len(matrix)*len(matrix[0])-1, target)
    
    def binarySearch(self, matrix, start, end, target):

        if start <= end:
            mid = start + end
            i = math.floor(mid/len(matrix[0]))
            j = mid%len(matrix[0])
            
            if matrix[i][j] == target:
                return True
            
            elif matrix[i][j] > target:
                return self.binarySearch(matrix, start, mid-1, target)
            
            else:
                return self.binarySearch(matrix, mid + 1, end, target)
        else:
            return False