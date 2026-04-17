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
   bool isSameTree(TreeNode* p,TreeNode* q){
    if(p==NULL||q==NULL) return (p==q);
    return (p->val==q->val)&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right); 
    
   }
    
};
int main()
{
    TreeNode* p=new TreeNode(1);
    p->left=new TreeNode(2);
    p->right=new TreeNode(3);
    p->right->left=new TreeNode(4);
    p->right->right=new TreeNode(5);
    TreeNode* q=new TreeNode(1);
    q->left=new TreeNode(2);
    q->right=new TreeNode(3);
    q->right->left=new TreeNode(4);
    q->right->right=new TreeNode(5);

    Solution obj;
    cout<<obj.isSameTree(p,q);
    return 0;

}