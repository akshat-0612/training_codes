class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int i = 0, j = nums.size() - 1, k = 0;
        int temp;
        while (k <= j)
        {
            if (nums[k] == 0)
            {
                temp = nums[i];
                nums[i] = nums[k];
                nums[k] = temp;
                k += 1;
                i += 1;
            }
            else if (nums[k] == 1)
            {
                k += 1;
            }
            else
            {
                temp = nums[k];
                nums[k] = nums[j];
                nums[j] = temp;
                j -= 1;
            }
        }
    }
}