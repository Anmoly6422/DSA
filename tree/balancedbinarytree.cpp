#include <iostream>
#include<algorithm>
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
   bool isbalance(TreeNode* root){
    return dfsheight(root)!=-1;
   }
    int dfsheight(TreeNode *root)
    {
        if(root==NULL) return 0;
        int leftheight=dfsheight(root->left);
        if(leftheight==-1) return -1;
        int rightheight=dfsheight(root->right);
        if(rightheight==-1) return -1;
        if(abs(leftheight-rightheight)>1) return -1;
        return max(leftheight,rightheight)+1;

    }
};
int main()
{
    TreeNode* node=new TreeNode(10);
    node->left=new TreeNode(5);
    node->right=new TreeNode(20);
    node->right->left=new TreeNode(15);
    node->right->right=new TreeNode(25);
    node->left->left=new TreeNode(3);
    node->left->right=new TreeNode(7);
    Solution obj;
    cout<<obj.isbalance(node);
    return 0;

}