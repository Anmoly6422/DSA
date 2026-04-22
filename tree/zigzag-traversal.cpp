#include <iostream>
#include <vector>
#include <queue>
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
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> nodeq;
        nodeq.push(root);
        bool lefttoright=true;
        while(!nodeq.empty()){
            int size=nodeq.size();
            vector<int> row(size);
            for(int i=0;i<size;i++){
                TreeNode* node=nodeq.front();
                nodeq.pop();
                int index=(lefttoright)?i:(size-1-i);
                row[index]=node->val;
                if(node->left){
                    nodeq.push(node->left);
                }
                if(node->right){
                    nodeq.push(node->right);
                }

            }
            lefttoright=!lefttoright;
            result.push_back(row);

        }
        return result;
    }
};
int main()
{
    TreeNode* node=new TreeNode(1);
    node->left=new TreeNode(2);
    node->right=new TreeNode(3);
    node->left->left=new TreeNode(4);
    node->left->right=new TreeNode(5);
    node->right->right=new TreeNode(6);
    Solution obj;
     vector<vector<int>> result = obj.zigzagLevelOrder(node);

    for (auto &row : result) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }


}