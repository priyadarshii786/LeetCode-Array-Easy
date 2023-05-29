class Solution
{
public:
    int reverse(int x)
    {
        // jai ganesh
        long long int num = 0; // we may use #define here like #define ll long long ........ to reduce the long long to ll
        int rem;
        while (x != 0) // while(x)
        {
            rem = x % 10;
            num = num * 10 + rem;
            x = x / 10;
        }

        if (num > INT_MIN && num < INT_MAX)
            return num;

        else
            return 0;
    }
};