//��дһ���������������ǽ�������ַ�����ת�����������ַ������ַ����� char[] ����ʽ������
//
//��Ҫ�����������������Ŀռ䣬�����ԭ���޸��������顢ʹ�� O(1) �Ķ���ռ�����һ���⡣
//
//����Լ��������е������ַ����� ASCII ����еĿɴ�ӡ�ַ���
//
//
//
//ʾ�� 1��
//
//���룺["h", "e", "l", "l", "o"]
//�����["o", "l", "l", "e", "h"]
//ʾ�� 2��
//
//���룺["H", "a", "n", "n", "a", "h"]
//�����["h", "a", "n", "n", "a", "H"]
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/reverse-string
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������


class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int left = 0, right = s.size() - 1; left < right; left++, right--)
        {
            char ch = s[left];
            s[left] = s[right];
            s[right] = ch;
        }
    }
};

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int left = 0, right = s.size() - 1; left < right; left++, right--)
        {
            // char ch = s[left];
            // s[left] = s[right];
            // s[right] = ch;
            swap(s[left], s[right]);
        }
    }
};