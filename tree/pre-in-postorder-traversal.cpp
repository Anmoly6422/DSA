#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct TreeNode{
    public: 
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data=val;
        left=right=NULL;
    }
};
class solution{
    public:vector<vector<int>> preinpostorder(TreeNode* root){
        stack<pair<TreeNode*,int>> st;
        st.push({root,1});
        vector<int> pre,in,post;
        if(root==NULL) return{pre,in,post};
        while(!st.empty()){
            auto it=st.top();
            st.pop();
            if(it.second==1){
                pre.push_back(it.first->data);
                it.second++;
                st.push(it);
                if(it.first->left!=NULL){
                    st.push({it.first->left,1});
                }


            }
            else if(it.second==2){
                in.push_back(it.first->data);
                it.second++;
                st.push(it);
                if(it.first->right!=NULL){
                    st.push({it.first->right,1});
                }
            }
            else{
                post.push_back(it.first->data);
            }
            
        }
        return {pre, in, post}; 

    }
};
int main(){
    TreeNode* root= new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);

    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
     root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    solution obj;
    vector<vector<int>> result = obj.preinpostorder(root);

    cout << "Preorder: ";
    for(auto x : result[0]) cout << x << " ";

    cout << "\nInorder: ";
    for(auto x : result[1]) cout << x << " ";

    cout << "\nPostorder: ";
    for(auto x : result[2]) cout << x << " ";

    return 0;
}