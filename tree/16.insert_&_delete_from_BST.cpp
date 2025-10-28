#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
TreeNode* insertBST (TreeNode* root, int val) {
    if (root == NULL)
        root = new TreeNode(val);

    else {
        if (val < root->data)
            root->left = insertBST(root->left, val);
        else
            root->right = insertBST(root->right, val);
    }

    return root;
}
// inorder
void inorder (TreeNode* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " -> ";
        inorder(root->right);
    }
}
TreeNode* findMin(TreeNode* root) {
    while (root->left != NULL)
        root = root->left;

    return root;
}
TreeNode*deleteBST(TreeNode*root,int x){
    if(root==NULL)
    return NULL;
    if(x<root->data)
    root->left=deleteBST(root->left,x);
    else if(x>root->data)
     root->right=deleteBST(root->right,x);
    else{
     //case1:no child
     if(root->left==NULL&&root->right==NULL){
     delete root;
     return NULL;
     }
     //case2:1 child
     if(root->left==NULL){//right child exist
         TreeNode*temp=root->right;
         delete root;
         return temp;
     }
     if(root->right==NULL){//left child exist
         TreeNode*temp=root->left;
         delete root;
         return temp;
     }
     //case3:2 child
     TreeNode* successor=findMin(root->right);
     root->data=successor->data;
     root->right=deleteBST(root->right,successor->data);
     }
     return root;
}
int main(){
    TreeNode*root = NULL;
    root = insertBST(root, 20);
    root = insertBST(root, 7);
    root = insertBST(root, 5);
    root = insertBST(root, 1);
    root = insertBST(root, 3);
    root = insertBST(root, 25);
    root = insertBST(root, 17);
    root = insertBST(root, 30);
    root = insertBST(root, 29);
    root = insertBST(root, 21);
    inorder(root);
    cout << endl;
    root = deleteBST(root,3);//no child
    inorder(root);
    cout<<endl;
    root = deleteBST(root,30);//1 child
    inorder(root);
    cout<<endl;
    root = deleteBST(root,20);//2 child
    inorder(root);
    cout<<endl;
    return 0;
    }
