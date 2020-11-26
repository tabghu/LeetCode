//给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。
//
//示例 1 :
//
//输入: s = "anagram", t = "nagaram"
//输出 : true
//示例 2 :
//
//	输入 : s = "rat", t = "car"
//	输出 : false
//
//	来源：力扣（LeetCode）
//	链接：https ://leetcode-cn.com/problems/valid-anagram
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    bool isAnagram(string s, string t) {
        int ret[26] = { 0 };
        for (int i = 0; i < s.size(); i++)
        {
            ret[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            ret[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (ret[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};