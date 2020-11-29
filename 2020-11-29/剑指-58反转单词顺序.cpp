//输入一个英文句子，翻转句子中单词的顺序，但单词内字符的顺序不变。为简单起见，标点符号和普通字母一样处理。例如输入字符串"I am a student. "，则输出"student. a am I"。
//
//
//
//示例 1：
//
//输入 : "the sky is blue"
//输出 : "blue is sky the"
//示例 2：
//
//输入 : "  hello world!  "
//输出 : "world! hello"
//解释 : 输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。
//示例 3：
//
//输入 : "a good   example"
//输出 : "example good a"
//解释 : 如果两个单词间有多余的空格，将反转后单词间的空格减少到只含一个。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/fan-zhuan-dan-ci-shun-xu-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    string myReverse(string& s, int size)
    {
        string str = "";
        int start = 0, end = size - 1;
        for (; start < end; start++, end--)
        {
            swap(s[start], s[end]);
        }
        for (int i = 0; i < size; i++)
        {
            str += s[i];
        }
        return str;

    }
    string resetString(string& s)
    {
        string ret = "";
        for (int i = 0; i < s.size();)
        {
            while (s[i++] == ' ')
            {
            }
            --i;
            string str = "";
            while (s[i] != ' ' && i < s.size())
            {
                str += s[i++];
            }
            ret += (myReverse(str, str.size()) + " ");
        }
        return ret;
    }
    string reverseWords(string s) {
        //先找到第一个不为空格的字母
        //然后对单词进行翻转
        //最后反转字符串
        string str = "";
        s = resetString(s);
        s = myReverse(s, s.size() - 1);
        if (s[0] == ' ')
        {
            for (int i = 1; i < s.size(); i++)
            {
                str += s[i];
            }
            return str;
        }
        return s;
    }
};