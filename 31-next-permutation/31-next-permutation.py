class Solution:
    def nextPermutation(self, nums):
        
        N = len(nums)
        pivot = N-2
        swap = N-1
        
        # while pivot >= 0:
        #     if nums[pivot] <= nums[pivot+1]:
        #         break
        #     pivot -= 1
        
        for pivot in range(N-2, -2, -1):
            if nums[pivot] < nums[pivot+1]:
                break
        
        print(pivot)
        
        if pivot == -1:
            nums.reverse()
            return
        
        for swap in range(N-1, pivot, -1):
            if nums[swap] > nums[pivot]:
                break;
                
        print(swap)
        
        nums[pivot], nums[swap] = nums[swap], nums[pivot]
        nums[pivot+1:] = nums[pivot+1:][::-1]
        