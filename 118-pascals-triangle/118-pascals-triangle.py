class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        pTriangle = []
        
        for i in range(numRows):
            pArray = [None for x in range(i+1)]
            pArray[0] = pArray[i] = 1
            for j in range(1,i):
                pArray[j] = pTriangle[i-1][j-1] + pTriangle[i-1][j]
            pTriangle.append(pArray)
        return pTriangle