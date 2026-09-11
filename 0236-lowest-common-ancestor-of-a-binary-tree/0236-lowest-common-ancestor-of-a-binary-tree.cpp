/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(root==NULL)
        return NULL;

        if(p==root || q==root)
        return root;

        // left side se leftN
        TreeNode*leftN=lowestCommonAncestor(root->left,p,q);
        //right side se rightN
        TreeNode*rightN=lowestCommonAncestor(root->right,p,q);

        if(leftN!=NULL && rightN!=NULL)
        return root;

        if(leftN!=NULL)
        {
        return leftN;
        }

       
        return rightN;


        
    }
};