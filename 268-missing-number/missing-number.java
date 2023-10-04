class Solution {
    public int missingNumber(int[] nums) {
        // jai ganesh
        
        int ans = 0, n = nums.length;
        for(int i=0;i<n;i++)
        {
            ans^=(nums[i]^i);
        }
        
        ans^=(n);
        return ans;
        
    }
}