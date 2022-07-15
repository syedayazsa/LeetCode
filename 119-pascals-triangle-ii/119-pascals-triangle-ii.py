class Solution(object):
    
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        row = [1]*(rowIndex+1)
        result = 1
        for i in range(rowIndex):
            result *= rowIndex - i
            result /= i+1
            row[i+1] = result
        return row