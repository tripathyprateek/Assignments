class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> maps;
        for (int n : nums)
        {
            if (++maps[n] > (nums.size()) / 2)
            {
                return n;
            }
        }
        return -1;
    }
};