//给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的 连续 子数组，并返回其长度。如果不存在符合条件的子数组，返回 0。
//
//
//
//示例：
//
//输入：s = 7, nums = [2, 3, 1, 2, 4, 3]
//输出：2
//解释：子数组 [4, 3] 是该条件下的长度最小的子数组。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/minimum-size-subarray-sum
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        // int winlen = 1;
        // while(winlen <= nums.size())
        // {
        //     for(int i = 0; i < nums.size() - winlen + 1; i++)
        //     {
        //         int sum = 0;
        //         int len  = winlen;
        //         int j = i;
        //         while(len--)
        //         {
        //             sum += nums[j++];
        //         }
        //         if(sum >= s)
        //         {
        //             return winlen;
        //         }
        //     }
        //     winlen++;
        // }
        // return 0;


        //暴力解法
        int minLen = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i;j < nums.size(); j++)
            {
                sum += nums[j];
                if (sum >= s)
                {
                    int subLen = j - i + 1;
                    minLen = (minLen > subLen ? subLen : minLen);
                    break;
                }
            }
        }
        return minLen == INT_MAX ? 0 : minLen;
    }

};




//滑动窗口
int sum = 0;
int subLen = 0;
int result = INT_MAX;
int  j = 0;
for (int i = 0; i < nums.size(); i++)
{
    sum += nums[i];
    while (sum >= s)
    {
        subLen = i - j + 1;
        result = (result > subLen) ? subLen : result;
        sum -= nums[j++];
    }
}
return result == INT_MAX ? 0 : result;