class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // jai ganesh
        // -------- this is the GFG lecture method
        int count = 0, n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i], nums[count]);
                count++;
            }
        }
    }
};