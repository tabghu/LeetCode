//�����������飬��дһ���������������ǵĽ�����
//
//
//
//ʾ�� 1��
//
//���룺nums1 = [1, 2, 2, 1], nums2 = [2, 2]
//�����[2]
//ʾ�� 2��
//
//���룺nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4]
//�����[9, 4]
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/intersection-of-two-arrays
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result_set;   //��Ž��
        unordered_set<int> num_set(nums1.begin(), nums1.end());
        for (int i = 0; i < nums2.size(); i++)
        {
            if (num_set.find(nums2[i]) != num_set.end())
            {
                result_set.insert(nums2[i]);
            }
        }
        return vector<int>(result_set.begin(), result_set.end());
    }
};