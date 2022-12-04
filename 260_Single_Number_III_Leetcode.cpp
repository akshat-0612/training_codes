class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> hash_map;
        for (int i : nums)
        {
            hash_map[i] += 1;
        }
        vector<int> ans;
        for (auto i : hash_map)
        {
            if (i.second == 1)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};