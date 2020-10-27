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
    void preOrder(TreeNode* root, vector<int>& ret)
    {
        if (!root)
            return;
        ret.push_back(root->val);
        preOrder(root->left, ret);
        preOrder(root->right, ret);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        //µ›πÈ–¥∑®
        vector<int> ret;
        preOrder(root, ret);
        return ret;
    }
};


//∑«µ›πÈ–¥∑®
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        stack<TreeNode*> st;
        if (!root)
            return ret;
        st.push(root);
        while (!st.empty())
        {
            TreeNode* cur = st.top();
            ret.push_back(cur->val);
            st.pop();
            if (cur->right)
                st.push(cur->right);
            if (cur->left)
                st.push(cur->left);
        }
        return ret;
    }
};