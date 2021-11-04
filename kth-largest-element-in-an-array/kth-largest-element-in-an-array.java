class Solution {
    public int findKthLargest(int[] nums, int k) {
        int l = nums.length;
        Arrays.sort(nums);
        return nums[l - k];
    }
    }