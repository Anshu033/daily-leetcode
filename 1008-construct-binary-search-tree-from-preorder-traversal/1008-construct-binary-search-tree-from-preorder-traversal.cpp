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
    int i=0;
    TreeNode* build(vector<int>& preorder,long long low , long long high)
    {
        // base case
        if(i == preorder.size())
        return NULL;

        // BOUND
        if(preorder[i]<=low || preorder[i]>=high)
        return NULL;
       
       //root bna do
        TreeNode* root= new TreeNode(preorder[i]);

        i++;

        root->left=build(preorder,low,root->val);
        root->right=build(preorder,root->val,high);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        return build(preorder,LLONG_MIN,LLONG_MAX);
        
    }
};