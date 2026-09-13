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
    int answer=0;
    void inorder(TreeNode* root,int&k)
    {
        if(root==NULL || k==0)
        return;

        // left
        inorder(root->left,k);

        if(k>0)
        {
            k--;

            if(k==0)
            answer=root->val;
        }
        //right
        inorder(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        inorder(root,k);
        return answer;
        
    }
};