﻿//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
//
//你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
//
//
//
//示例:
//
//给定 nums = [2, 7, 11, 15], target = 9
//
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回[0, 1]
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/two-sum
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        int left = 0;
        int right = nums.size() - 1;
        while (left < right)
        {
            if (nums[left] + nums[right] == target)
            {
                ret.push_back(left);
                ret.push_back(right);
                return ret;
            }
            else if (nums[left] + nums[right] > target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return ret;
    }
};