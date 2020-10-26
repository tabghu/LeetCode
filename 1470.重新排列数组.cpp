class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ret;
        int i = 0;
        while (ret.size() != nums.size())
        {
            ret.push_back(nums[i++]);
            ret.push_back(nums[n++]);
        }
        return ret;
    }
};