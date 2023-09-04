class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //jai ganesh
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                return {i,j}; //This line is worth noticing.
            }
        }
        return {};//this line too is worth noticing.
    }
};