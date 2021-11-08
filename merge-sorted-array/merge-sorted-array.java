class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        if(n==0 || nums1 == null)
            return;
        int l = nums1.length;
        for(int i = 0; i<n; i++){
            nums1[l - n + i] = nums2[i];
        }
        Arrays.sort(nums1);
    }
}