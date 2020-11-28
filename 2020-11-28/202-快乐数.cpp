编写一个算法来判断一个数 n 是不是快乐数。

「快乐数」定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。如果 可以变为  1，那么这个数就是快乐数。

如果 n 是快乐数就返回 True ；不是，则返回 False 。



示例：

输入：19
输出：true
解释：
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

来源：力扣（LeetCode）
链接：https ://leetcode-cn.com/problems/happy-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


class Solution {
public:
    //解题思路
    //通过set容器对数据进行处理 如果该数未出现过，则加入set容器，若已经出现过且不为1，则说明进入了循环
    int getSum(int n)
    {
        int sum = 0;
        while (n)
        {
            sum += pow(n % 10, 2);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        //进行循环判断
        //只有当某结果重复出现或者结果为1才能退出循环
        int sum;
        unordered_set<int> ret;
        while (1)
        {
            sum = getSum(n);
            if (sum == 1)
            {
                return true;
            }
            //说明在set中查找到了sum
            if (ret.find(sum) != ret.end())
            {
                return false;
            }
            else
            {
                ret.insert(sum);
            }
            n = sum;
        }
    }
};

//快慢指针
class Solution {
public:
    int  getSum(int n)
    {
        int sum = 0;
        while (n)
        {
            sum += pow(n % 10, 2);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        //利用快慢指针
        //若存在循环，让快指针进行两次计算个位数
        //满指针只进行一次
        int slow = n;
        int fast = n;
        do {
            slow = getSum(slow);
            fast = getSum(fast);
            fast = getSum(fast);
        } while (slow != fast);
        return fast == 1;
    }
};