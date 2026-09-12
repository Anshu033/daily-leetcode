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

//  APPROCH CAN BE 
        // 1) root null check kr 
        // 2) check kr root val max se jyada hai toh count++
        // 3) max ko update marte ja 
        // 4) recursive call lga de --- jisse left and rignt max mil jayega and update hote rhega 
        // 5) return count+right+left kr do .....count and right and left sb side ka nikal jeega kitne good nodes hai 


    int solve(TreeNode* root,int maxi)
    {

        int count=0;
        if(root==NULL)
        return 0;

        if(root->val >= maxi)
        count++;

        maxi=max(maxi,root->val);

        int left=solve(root->left,maxi);
        int right=solve(root->right,maxi);

        return count+left+right;
    }
    int goodNodes(TreeNode* root) 
    {
        if(root==NULL)
        return 0;

        return solve(root,root->val);
    }
};