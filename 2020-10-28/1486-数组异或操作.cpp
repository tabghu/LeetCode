//��������������n �� start ��
//
//���� nums ����Ϊ��nums[i] = start + 2 * i���±�� 0 ��ʼ���� n == nums.length ��
//
//�뷵�� nums ������Ԫ�ذ�λ���XOR����õ��Ľ����
//
//
//
//ʾ�� 1��
//
//���룺n = 5, start = 0
//�����8
//���ͣ����� nums Ϊ[0, 2, 4, 6, 8]������(0 ^ 2 ^ 4 ^ 6 ^ 8) = 8 ��
//"^" Ϊ��λ��� XOR �������
//ʾ�� 2��
//
//���룺n = 4, start = 3
//�����8
//���ͣ����� nums Ϊ[3, 5, 7, 9]������(3 ^ 5 ^ 7 ^ 9) = 8.
//ʾ�� 3��
//
//���룺n = 1, start = 7
//�����7
//ʾ�� 4��
//
//���룺n = 10, start = 5
//�����2
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/xor-operation-in-an-array
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������


class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>ret;
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            ret.push_back(start + 2 * i);
        }
        int i = 0;
        while (n--)
        {
            result ^= ret[i++];
        }
        return result;
    }
};