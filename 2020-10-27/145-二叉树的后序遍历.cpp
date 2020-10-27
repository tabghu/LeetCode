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
class Solution {
public:
    void postOrder(TreeNode* root, vector<int>& ret)
    {
        if (!root)
            return;
        postOrder(root->left, ret);
        postOrder(root->right, ret);
        ret.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        //µ›πÈ–¥∑®
        vector<int> ret;
        postOrder(root, ret);
        return ret;
    }
};



//∑«µ›πÈ–¥∑®
class Solution {
public:
    void my_reverse(vector<int>& ret)
    {
        for (int i = 0, j = ret.size() - 1; i <= j; i++, j--)
        {
            int temp = ret[i];
            ret[i] = ret[j];
            ret[j] = temp;
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ret;
        if (!root)
            return ret;
        st.push(root);
        while (!st.empty())
        {
            TreeNode* cur = st.top();
            st.pop();
            ret.push_back(cur->val);
            if (cur->left)
                st.push(cur->left);
            if (cur->right)
                st.push(cur->right);
        }
        my_reverse(ret);
        return ret;
    }
};