class Solution {
public:
        
    vector<int> searchRange(vector<int> &nums, int target)
    {

        vector<int> v(2, -1);

        if (nums.size() == 0)
            return v;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == target)
            {
                v[0] = i;
                break;
            }
        }

        for (int i = nums.size() - 1; i >= 0; --i)
        {
            if (nums[i] == target)
            {
                v[1] = i;
                break;
            }
        }
        return v;
    }
};