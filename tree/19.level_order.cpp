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
    if (root == NULL) // tree is empty
        root = new TreeNode(val);

    else {
        if (val < root->data)
            root->left = insertBST(root->left, val);
        else
            root->right = insertBST(root->right, val);
    }

    return root;
}

// preorder
void preorder (TreeNode* root) { // DLR
    if (root) {
        cout << root->data << " -> ";
        preorder(root->left);
        preorder(root->right);
    }
}
// inorder
void inorder (TreeNode* root) { // LDR
    if (root) {
        inorder(root->left);
        cout << root->data << " -> ";
        inorder(root->right);
    }
}
// postorder
void postorder (TreeNode* root) { // LRD
    if (root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " -> ";
    }
}

// level-order traversal
void levelOrder(TreeNode* root) {
    if (root == NULL)
        return;

    queue<TreeNode*> q; // queue<data_type> queue_name;
    q.push(root);

    while (!q.empty()) {
        TreeNode* temp = q.front();
        cout << temp->data << " -> ";
        q.pop();

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
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

TreeNode* findMin(TreeNode* root) {
    while (root->left != NULL)
        root = root->left;

    return root;
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

TreeNode* deleteBST (TreeNode* root, int x) {
    if (root == NULL)
        return NULL;

    if (x < root->data)
        root->left = deleteBST(root->left, x);

    else if (x > root->data)
        root->right = deleteBST(root->right, x);

    else {
        // case 1: no child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // case 2: 1 child
        if (root->left == NULL) { // right child exists
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }

        if (root->right == NULL) { // left child exists
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        // case 3: 2 children
        TreeNode* successor = findMin(root->right);
        root->data = successor->data;
        root->right = deleteBST(root->right, successor->data);
        return root;
    }
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

    levelOrder(root);
    cout << endl;

    return 0;
}
