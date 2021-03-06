﻿//给定一个包含 n 个整数的数组 nums 和一个目标值 target，判断 nums 中是否存在四个元素 a，b，c 和 d ，使得 a + b + c + d 的值与 target 相等？找出所有满足条件且不重复的四元组。
//
//注意：
//
//答案中不可以包含重复的四元组。
//
//示例：
//
//给定数组 nums = [1, 0, -1, 0, -2, 2]，和 target = 0。
//
//满足要求的四元组集合为：
//[
//	[-1, 0, 0, 1],
//	[-2, -1, 1, 2],
//	[-2, 0, 0, 2]
//]
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/4sum
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //利用双指针
        sort(nums.begin(), nums.end());
        vector<vector<int>> ret;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                {
                    continue;
                }
                int left = j + 1;
                int right = nums.size() - 1;
                while (right > left)
                {
                    if (target > nums[i] + nums[j] + nums[left] + nums[right])
                    {
                        left++;
                    }
                    else if (target < nums[i] + nums[j] + nums[left] + nums[right])
                    {
                        right--;;
                    }
                    else
                    {
                        vector<int> tmp{ nums[i], nums[j], nums[left], nums[right] };
                        ret.push_back(tmp);
                        //插入完之后，开始调整位置
                        while (right > left && nums[right] == nums[right - 1])
                        {
                            right--;
                        }
                        while (right > left && nums[left] == nums[left + 1])
                        {
                            left++;
                        }
                        right--;
                        left++;
                    }
                }
            }
        }
        return ret;
    }
};