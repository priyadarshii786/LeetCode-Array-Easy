/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    //jai ganesh
    
    let size=0;
    for(let i=0;i<nums.length;i++)
    {
        if(nums[i]!=val)
        {
            nums[size]=nums[i];
            size++;
        }
    }
    
    return size;
    
};