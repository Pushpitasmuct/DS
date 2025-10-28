#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
  int data;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};
TreeNode*insertBST(TreeNode*root,int val){
    if(root==NULL)
    root=new TreeNode(val);
    else{
        if(val<= root->data)
        root->left=insertBST(root->left,val);
        else
        root->right=insertBST(root->right,val);
    }
    return root;  
}

void preorder(TreeNode*root){
    if(root){
        cout<<root->data<<"->";
        preorder(root->left);
        preorder(root->right);
    }
}
int main() {
TreeNode*root=NULL;
int n;
cout<<"How many nodes?:";
cin>>n;
while(n--){
    int x;
    cout<<"Enter value:";
    cin>>x;
    root=insertBST(root,x);
}
preorder(root);
    return 0;
}