//��дһ��������������ʱ������ֱ�ӽ���numbers = [a, b]��a��b��ֵ��
//
//ʾ����
//
//���� : numbers = [1, 2]
//��� : [2, 1]
//��ʾ��
//
//numbers.length == 2
//
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/swap-numbers-lcci
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
class Solution {
public:
    vector<int> swapNumbers(vector<int>& numbers) {
        numbers[0] = numbers[0] ^ numbers[1];
        numbers[1] = numbers[0] ^ numbers[1];
        numbers[0] = numbers[0] ^ numbers[1];
        return numbers;
    }
};