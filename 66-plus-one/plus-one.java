class Solution {
    public int[] plusOne(int[] digits) {
        //jai ganesh
        // https://youtu.be/iBk_JyxxuN8
        
        int n=digits.length;
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            digits[i]=0;
            
        }
        //------> below code is for the case when there is only single element in the array
        int[] newNumber=new int[n+1];
        newNumber[0]=1;
        return newNumber;
    }
}