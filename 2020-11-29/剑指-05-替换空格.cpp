//��ʵ��һ�����������ַ��� s �е�ÿ���ո��滻��"%20"��
//
//
//
//ʾ�� 1��
//
//���룺s = "We are happy."
//�����"We%20are%20happy."
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/ti-huan-kong-ge-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������


class Solution {
public:
    string replaceSpace(string s) {
        string str = "";
        for (char c : s)
        {
            if (c == ' ')
            {
                str += "%20";
            }
            else
            {
                str += c;
            }
        }
        return str;
    }
};

//����˫ָ�����滻�ո�
//�ȼ��������еĿո�������ͨ���ո���������ԭ�ַ�����������
//��β����ʼ����˫ָ��û��ָ��ͬһλ��ʱ��˵��δ�滻����
class Solution {
public:
    string replaceSpace(string s) {
        //�������飬����˫ָ��������
        int oldSize = s.size();
        int count = 0;
        for (char c : s)
        {
            if (c == ' ')
                count++;
        }
        s.resize(s.size() + 2 * count);
        int newSize = s.size();
        for (int i = newSize - 1, j = oldSize - 1; j != i; j--)
        {
            if (s[j] != ' ')
            {
                s[i--] = s[j];
            }
            else
            {
                s[i] = '0';
                s[i - 1] = '2';
                s[i - 2] = '%';
                i -= 2;
                i--;
            }
        }
        return s;
    }
};