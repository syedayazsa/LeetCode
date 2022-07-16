class Solution:
    def nextPermutation(self, nums):
        
        N = len(nums)
        pivot = N-2
        
        #finding pivot
        for pivot in range(N-2, -2, -1):
            if nums[pivot] < nums[pivot+1]:
                break
        
        #corner case Eg: [3,2,1]
        if pivot == -1:
            nums.reverse()
            return
        
        # finding element to swap with pivot
        swap = N-1
        for swap in range(N-1, pivot, -1):
            if nums[swap] > nums[pivot]:
                break;
                
        #swapping pivot, swap and reversing after pivot
        nums[pivot], nums[swap] = nums[swap], nums[pivot]
        nums[pivot+1:] = nums[pivot+1:][::-1]
        
        
        