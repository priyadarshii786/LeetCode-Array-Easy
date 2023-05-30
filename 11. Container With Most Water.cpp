class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        // jai ganesh
        int max_capacity = INT_MIN; // initially we have taken the maximum capacity of the container as some minimum possible value.
        for (int i = 0; i < height.size(); i++)
        {
            for (int j = i + 1; j < height.size(); j++)
            {
                // TIME COMPLEXITY : O(n^2)
                int water = (j - i) * (min(height[i], height[j]));
                max_capacity = max(max_capacity, water);
            }
        }

        return max_capacity;
    }
};