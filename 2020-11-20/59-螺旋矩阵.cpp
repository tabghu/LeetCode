//给定一个正整数 n，生成一个包含 1 到 n2 所有元素，且元素按顺时针顺序螺旋排列的正方形矩阵。
//
//示例 :
//
//输入: 3
//输出 :
//	[
//		[ 1, 2, 3 ],
//		[8, 9, 4],
//		[7, 6, 5]
//	]
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/spiral-matrix-ii
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int loop = ((n % 2) == 0) ? n / 2 : (n + 1) / 2;
        if (n % 2)
        {
            res[n / 2][n / 2] = n * n;
        }
        int start = 0;
        int end = n - 1;
        int count = 1;
        while (loop--)
        {
            //进行四个边界的绘制
            //绘制左上到右上
            for (int i = start; i < end; i++)
            {
                res[start][i] = count++;
            }
            //绘制右上到右下
            for (int i = start; i < end; i++)
            {
                res[i][end] = count++;
            }
            //绘制右下到左下
            for (int i = end; i > start; i--)
            {
                res[end][i] = count++;
            }
            //绘制左下到左上
            for (int i = end; i > start; i--)
            {
                res[i][start] = count++;
            }
            start++;
            end--;
        }

        return res;

    }
};