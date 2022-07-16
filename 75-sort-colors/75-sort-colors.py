class Solution:
    def sortColors(self, nums: List[int]) -> None:
        
        red = white = 0
        
        for val in nums:
            if val == 0:
                red += 1
            if val == 1:
                white += 1
                
        for i in range(0, red):
            nums[i] = 0
        
        for i in range(red, red+white):
            nums[i] = 1
            
        for i in range(red+white, len(nums)):
            nums[i] = 2
            
            
        