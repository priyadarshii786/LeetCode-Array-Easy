class Solution
{
public:
    bool isPalindrome(int x)
    {
        // jai ganesh

        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;

        int rev = 0;
        while (x > rev) // here comparing half of the digits in x, that's why there's no need of handling overflow
        {
            x = x % 10;
            rev = (rev * 10) + x;
            x = x / 10;
        }

        return (x == rev || x == rev / 10);
        // return true;
    }
};