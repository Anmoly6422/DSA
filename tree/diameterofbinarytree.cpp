#include<iostream>
#include<algorithm>
using namespace std;
struct tree
{
    int val;
    tree* left;
    tree* right;
    tree(int data){
        val=data;
        left=right=NULL;
    }
};
class solution{
    public:
    int diameterofbinarytree(tree* root){
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
    int height(tree* node,int &diameter){
        if(!node){
            return 0;
        }
        int lh=height(node->left,diameter);
        int rh=height(node->right,diameter);
        diameter=max(diameter,lh+rh);
        return 1+max(lh,rh);
    }

};
int main(){
    tree* node=new tree(1);
    node->left=new tree(2);
    node->left->left=new tree(4);
    node->left->right=new tree(5);
    node->right=new tree(3);
    solution obj;
   cout<<obj.diameterofbinarytree(node);
   return 0;


}
