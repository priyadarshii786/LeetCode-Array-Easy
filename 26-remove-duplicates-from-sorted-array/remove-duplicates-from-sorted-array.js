/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    //jai ganesh

    let res=1;
    for(let i=1;i<nums.length;i++)
    {
            if(nums[i]!=nums[res-1])
            {
                nums[res]=nums[i];
                res++;
            }
    }
    
    return res;
};