class Solution {
public:
    //���ַ���ȥͷȥβ�Ŀո�
    //���ַ���������ת
    string reverse(string s)
    {
        string str;
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        {
            swap(s[i], s[j]);
        }
        for (int i = 0; i < s.size(); i++)
        {
            str += s[i];
        }
        return str;
    }
    string reSetStr(string s)
    {
        string ret = "";
        for (int i = 0; i < s.size();)
        {
            //ȥ��ͷ���ո�
            while (s[i++] == ' ')
                ;
            //�õ���������
            --i;
            string str = "";
            while (s[i] != ' ' && i < s.size())
            {
                str += s[i++];
            }
            if (str.size())
                ret += (reverse(str) + " ");
        }
        //����һ���ַ���������һ���ո�
        string s1 = "";
        for (int j = 0; j < ret.size() - 1; j++)
        {
            s1 += ret[j];
        }
        return s1;
    }
    string reverseWords(string s) {
        string str = reSetStr(s);
        return reverse(str);
    }
};