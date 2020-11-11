﻿//给你一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？请你找出所有满足条件且不重复的三元组。
//
//注意：答案中不可以包含重复的三元组。
//
//
//
//示例：
//
//给定数组 nums = [-1, 0, 1, 2, -1, -4]，
//
//满足要求的三元组集合为：
//[
//	[-1, 0, 1],
//	[-1, -1, 2]
//]
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/3sum
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //利用三指针法对问题进行求解

        vector<vector<int>>ret;
        int left = 0;
        int right = nums.size() - 1;
        if (nums.size() <= 2)
        {
            return ret;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size();i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            left = i + 1;
            right = nums.size() - 1;
            while (left < right)
            {
                if (nums[i] + nums[left] + nums[right] == 0)
                {
                    vector<int> arr;
                    arr.push_back(nums[i]);
                    arr.push_back(nums[left]);
                    arr.push_back(nums[right]);
                    ret.push_back(arr);
                    while (left < right && nums[right] == nums[right - 1])
                    {
                        right--;
                    }
                    while (left < right && nums[left] == nums[left + 1])
                    {
                        left++;
                    }
                    right--;
                    left++;
                }
                else if (nums[i] + nums[left] + nums[right] > 0)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return ret;
    }
};