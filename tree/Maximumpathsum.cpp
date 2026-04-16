#include <iostream>
#include<algorithm>
#include<climits>
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
  int maxpathsum(TreeNode* node){
    int maxi=INT_MIN;
    maxpathdown(node,maxi);
    return maxi;

  }
  int maxpathdown(TreeNode* node,int &maxi){
    if(node==NULL) return 0;
    int left=max(0,maxpathdown(node->left,maxi));
    int right=max(0,maxpathdown(node->right,maxi));
    maxi=max(maxi,left+right+node->val);
    return max(left,right)+node->val;
  }
};
int main()
{
    TreeNode* node=new TreeNode(-10);
    node->left=new TreeNode(9);
    node->right=new TreeNode(20);
    node->right->left=new TreeNode(15);
    node->right->right=new TreeNode(7);
    Solution obj;
    cout<<obj.maxpathsum(node);
    return 0;

}