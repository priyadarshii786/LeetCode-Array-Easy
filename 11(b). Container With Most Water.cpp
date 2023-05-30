class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        // jai ganesh

        // using Two-Pointer approach
        //  TC: O(n)
        //  SC: O(1)

        int i = 0, j = height.size() - 1;
        int max_capacity = INT_MIN;

        while (i < j)
        {
            int water = (j - i) * min(height[i], height[j]);
            max_capacity = max(max_capacity, water);

            if (height[i] < height[j])
                i++;

            else
                j--;
        }

        return max_capacity;
    }
};