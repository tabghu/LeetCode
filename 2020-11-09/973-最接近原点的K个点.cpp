//������һ����ƽ���ϵĵ���ɵ��б� points����Ҫ�����ҳ� K ������ԭ��(0, 0) ����ĵ㡣
//
//�����ƽ��������֮��ľ�����ŷ����¾��롣��
//
//����԰��κ�˳�򷵻ش𰸡����˵������˳��֮�⣬��ȷ����Ψһ�ġ�
//
//
//
//ʾ�� 1��
//
//���룺points = [[1, 3], [-2, 2]], K = 1
//����� [[-2, 2]]
//���ͣ�
//(1, 3) ��ԭ��֮��ľ���Ϊ sqrt(10)��
//(-2, 2) ��ԭ��֮��ľ���Ϊ sqrt(8)��
//���� sqrt(8) < sqrt(10)��(-2, 2) ��ԭ�������
//	����ֻ��Ҫ����ԭ������� K = 1 ���㣬���Դ𰸾��� [[-2, 2]] ��
//	ʾ�� 2��
//
//	���룺points = [[3, 3], [5, -1], [-2, 4]], K = 2
//	����� [[3, 3], [-2, 4]]
//	���� [[-2, 4], [3, 3]] Ҳ�ᱻ���ܡ���
//
//	��Դ�����ۣ�LeetCode��
//	���ӣ�https ://leetcode-cn.com/problems/k-closest-points-to-origin
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

class Solution {
public:
    static bool cmp(vector<int>& v, vector<int>& u)
    {
        return v[0] * v[0] - u[0] * u[0];
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> ret;
        // vector<int> res;
        // vector<vector<int>> ret;
        // //�õ��˾�������
        // for(int i = 0; i < points.size(); i++)
        // {
        //     int dis = sqrt(points[i][0] * points[i][0] + points[i][1] * points[i][1]);
        //     res.push_back(dis);
        // }
        // for(int i = 0; i < k; i++)
        // {

        // }

        //�Լ���д����ν���߼�
        sort(points.begin(), points.end(), cmp);
        for (int i = 0; i < k; i++)
        {
            ret.push_back(points[i]);
        }
        return ret;
    }
};