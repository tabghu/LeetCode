/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//�ݹ�ⷨ
class Solution {
public:
    void inOrder(TreeNode* root, vector<int>& ret)
    {
        if (!root)
            return;
        inOrder(root->left, ret);
        ret.push_back(root->val);
        inOrder(root->right, ret);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        inOrder(root, ret);
        return ret;
    }
};


//�ǵݹ�ⷨ
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ret;
        TreeNode* cur = root;
        while (cur || !st.empty())
        {
            //Ѱ������ڵ�
            if (cur)
            {
                st.push(cur);
                cur = cur->left;
            }
            else
            {
                cur = st.top();
                ret.push_back(cur->val);
                st.pop();
                cur = cur->right;
            }
        }
        return ret;
    }
};