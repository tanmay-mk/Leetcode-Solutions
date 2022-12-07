/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

 struct TreeNode* GetNewNode(int val)
 {
    struct TreeNode* temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    temp->left = NULL; 
    temp->right = NULL;
    temp->val = val; 

    return temp;  
 }

struct TreeNode* insertIntoBST(struct TreeNode* root, int val){

    if (root == NULL)
    {
        root = GetNewNode(val);
        return root; 
    }

    if (val < root->val)
    {
        if (root->left == NULL)
        {
            root->left = GetNewNode(val);
        }
        else
        {
            root->left = insertIntoBST(root->left, val);
        }
    }
    else if (val > root->val)
    {
        if (root->right == NULL)
        {
            root->right = GetNewNode(val);
        }
        else
        {
            root->right = insertIntoBST(root->right, val);
        }
    }
    return root; 
}