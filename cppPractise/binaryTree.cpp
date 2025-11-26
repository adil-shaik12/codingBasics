#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void inorder(node *node)
{
    if (node == NULL)
    {
        return;
    }
    inorder(node->left);
    cout << node->data;
    inorder(node->right);
}
void preorder(node *node)
{
    if (node == NULL)
    {
        return;
    }
    cout << node->data;
    preorder(node->left);
    preorder(node->right);
}
void postorder(node *node)
{
    if (node == NULL)
    {
        return;
    }
    postorder(node->left);
    postorder(node->right);  
    cout << node->data;
}
int main()
{
    struct node *root = new node(5);
    root->left = new node(4);
    root->right = new node(6);
    root->left->left = new node(1);
    root->left->right = new node(2);
    root->right->left = new node(7);
    root->right->right = new node(8);
    cout << "inorder traversal:" << "\n";
    inorder(root);
    cout << "\n";
    cout << "preorder traversal:" << "\n";
    preorder(root);
    cout << "\n";
    cout << "postorder traversal:" << "\n";
    postorder(root);
    return 0;
}