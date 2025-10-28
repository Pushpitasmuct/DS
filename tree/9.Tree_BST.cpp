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
        if (val <= root->data)
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

bool Search(TreeNode* root, int x) {
    if (root == NULL)
        return false;

    if (x == root->data)
        return true;

    if (x < root->data)
        return Search(root->left, x);

    return Search(root->right, x);
}

int findMin(TreeNode* root) {
    while (root->left != NULL)
        root = root->left;

    return root->data;
}

int findMax(TreeNode* root) {
    while (root->right != NULL)
        root = root->right;

    return root->data;
}

int height(TreeNode* root) {
    if (root == NULL)
        return -1;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int main() {

    TreeNode* root = NULL;

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



    cout << "Min value: " << findMin(root) << endl;
    cout << "Max value: " << findMax(root) << endl;

    cout << "Height of tree: " << height(root) << endl;

    return 0;
}
