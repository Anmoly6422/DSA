#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        val = data;
        left = right = NULL;
    }
};
 class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
int main()
{
    TreeNode* node=new TreeNode(1);
    node->left=new TreeNode(2);
    node->right=new TreeNode(3);
    node->right->left=new TreeNode(4);
    node->right->right=new TreeNode(6);
    node->right->left->left=new TreeNode(5);
    Solution obj;
    cout<<obj.maxDepth(node);
    return 0;

}