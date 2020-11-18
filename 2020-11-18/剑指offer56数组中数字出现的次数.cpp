//һ���������� nums �����������֮�⣬�������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε����֡�Ҫ��ʱ�临�Ӷ���O(n)���ռ临�Ӷ���O(1)��
//
//
//
//ʾ�� 1��
//
//���룺nums = [4, 1, 4, 6]
//�����[1, 6] ��[6, 1]
//ʾ�� 2��
//
//���룺nums = [1, 2, 10, 4, 1, 4, 3, 3]
//�����[2, 10] ��[10, 2]
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        vector<int> vec;
        int ret = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ret ^= nums[i];
        }
        int div = 1;
        while ((div & ret) == 0)
        {
            div <<= 1;
        }
        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (div & nums[i])
            {
                a ^= nums[i];
            }
            else
            {

                b ^= nums[i];
            }
        }
        vec.push_back(a);
        vec.push_back(b);
        return vec;
    }
};