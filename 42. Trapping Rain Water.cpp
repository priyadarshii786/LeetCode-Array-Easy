class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        vector<int> lm(n);
        vector<int> rm(n);
        int max = height[0];
        lm[0] = max;

        for (int i = 1; i < n; i++)
        {
            if (max < height[i])
                max = height[i];
            lm[i] = max;
        }

        max = height[n - 1];
        rm[n - 1] = max;
        int total = 0;

        for (int i = n - 2; i >= 0; i--)
        {
            if (max < height[i])
                max = height[i];
            rm[i] = max;
        }

        for (int i = 1; i < n - 1; i++)
        {
            if ((lm[i - 1] > height[i]) && (rm[i + 1] > height[i]))
                total += min((lm[i - 1] - height[i]), (rm[i + 1] - height[i]));
        }
        return total;
    }
};
