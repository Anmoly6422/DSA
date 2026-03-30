#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* node=root;
        stack<TreeNode*> st;

        while (true) {
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
           else{
            if(st.empty()==true) break;
            node =st.top();
            st.pop();
            ans.push_back(node->val);
            node=node->right;

           }
        
        }
        return ans;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->left=new TreeNode(6);
     root->left->right->right=new TreeNode(7);

    Solution obj;
    vector<int> result = obj.inorderTraversal(root);

    cout << "Inorder: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}