class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        merged = []
        
        intervals.sort()
        
        for x in intervals:
            if not merged or x[0] > merged[-1][1]:
                merged.append(x)
            else:
                merged[-1][1] = max(merged[-1][1], x[1])
                
        return merged
                