//�ַ���������ת�����ǰ��ַ���ǰ������ɸ��ַ�ת�Ƶ��ַ�����β�����붨��һ������ʵ���ַ�������ת�����Ĺ��ܡ����磬�����ַ���"abcdefg"������2���ú�������������ת��λ�õ��Ľ��"cdefgab"��
//
//
//
//ʾ�� 1��
//
//���� : s = "abcdefg", k = 2
//��� : "cdefgab"
//ʾ�� 2��
//
//���� : s = "lrloseumgh", k = 6
//��� : "umghlrlose"
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    string reverse(string& s, int start, int  end)
    {
        for (int i = start, j = end - 1; i < j; i++, j--)
        {
            swap(s[i], s[j]);
        }
        return s;
    }
    string reverseLeftWords(string s, int n) {
        reverse(s, 0, n);
        reverse(s, n, s.size());
        reverse(s, 0, s.size());
        return s;
    }
};