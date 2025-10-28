#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    int height;
    TreeNode(int val) {
        data = val;
        left = NULL;
        right= NULL;
        height=1;
    }
};
//helper function
int getHeight(TreeNode*node){
return node?node->height:0;
///ternary operator used
}
void updateHeight(TreeNode*node){
    if(node){
    int leftHeight=getHeight(node->left);
    int rightHeight=getHeight(node->right);
    node->height=max(leftHeight,rightHeight)+1;
    }
}
int getBalance( TreeNode*node){
    return node?getHeight(node->left)-getHeight(node->right):0;
    ///ternary operator used
}
TreeNode*LLRotation(TreeNode*y){ //y=rotate node
    TreeNode*x=y->left;
    TreeNode*z=x->right;
    x->right=y;
    y->left=z;
    updateHeight(y);///nicher ta age update korbo
    updateHeight(x);
    return x;
    }
    TreeNode*RRRotation(TreeNode*x){ //x=rotate node
    TreeNode*y=x->right;
    TreeNode*z=y->left;
    y->left=x;
    x->right=z;
    updateHeight(x);///nicher ta age update korbo
    updateHeight(y);
    return y;
    }
TreeNode* balanceNode(TreeNode*node){
    updateHeight(node);
    int bf=getBalance(node);
    if(bf>1 && getBalance(node->left)>=0)///left-left
    return LLRotation(node);
    if(bf>1 && getBalance(node->left)<0){///left-right
        node->left=RRRotation(node->left);
        return LLRotation(node);
    }
    if(bf<-1 && getBalance(node->right)<=0)///right-right
        return  RRRotation(node);
    if(bf<-1&& getBalance(node->right)>0){///right-left
        node->right=LLRotation(node->right);
        return RRRotation(node);
    }  
    return node;
}
TreeNode* insertBST (TreeNode* root, int val) {
    if (root == NULL)
        root = new TreeNode(val);

    else {
        if (val <= root->data)
            root->left = insertBST(root->left, val);
        else
            root->right = insertBST(root->right, val);
    }
   root=balanceNode(root);
    return root;
}
TreeNode* findMin(TreeNode* root) {
    while (root->left != NULL)
        root = root->left;

    return root;
}
TreeNode* deleteBST(TreeNode* root,int x){
    if(root == NULL)
        return NULL;

    if(x < root->data)
        root->left = deleteBST(root->left , x);
    else if(x > root->data)
        root->right = deleteBST(root->right , x);
    else{
        //case 1: no child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //case 2: 1 child
        if(root->left == NULL){ //right child exist
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        if(root->right == NULL){ //left child exist
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        //case 3: 2 child
        TreeNode* successor = findMin(root->right);
        root->data = successor->data;
        root->right = deleteBST(root->right,successor->data);
      
    }
     return balanceNode(root);
  }
  void inorder (TreeNode* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " -> ";
        inorder(root->right);
    }
}
int main(){
   TreeNode*root=NULL;
   for(int val:{10,20,30,40,50,25})///new way te easily loop chalano
   root=insertBST(root,val);
   cout<<"inorder traversal:\n";
   inorder(root);
}