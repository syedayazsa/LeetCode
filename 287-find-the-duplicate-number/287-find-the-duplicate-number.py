class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        
        fast = nums[0]
        slow = nums[0]
        
        while True: #since python doesn't have do-while
            slow = nums[slow]
            fast = nums[nums[fast]]
            if slow == fast:
                break
        
        fast = nums[0]
        
        while fast != slow:
            slow = nums[slow]
            fast = nums[fast]
        
        return fast