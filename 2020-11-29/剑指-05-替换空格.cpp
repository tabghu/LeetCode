//请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
//
//
//
//示例 1：
//
//输入：s = "We are happy."
//输出："We%20are%20happy."
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/ti-huan-kong-ge-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


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

//利用双指针来替换空格
//先计算数组中的空格数量，通过空格数量来对原字符串进行扩容
//从尾部开始，当双指针没有指到同一位置时，说明未替换结束
class Solution {
public:
    string replaceSpace(string s) {
        //扩充数组，利用双指针进行求解
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