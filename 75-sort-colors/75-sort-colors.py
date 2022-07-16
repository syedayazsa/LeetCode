class Solution:
    def sortColors(self, nums: List[int]) -> None:
        
        red = white = blue = 0
        
        for i in range(len(nums)):
            if nums[i] == 0:
                red += 1
            if nums[i] == 1:
                white += 1
            if nums[i] == 2:
                blue += 1
                
        for i in range(0, red):
            nums[i] = 0
        
        for i in range(red, red+white):
            nums[i] = 1
            
        for i in range(red+white, len(nums)):
            nums[i] = 2
        