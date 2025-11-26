#include <bits/stdc++.h>
#include <queue>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
node *insert(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}
node *search(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    if (key < root->data)
    {
        return search(root->left, key);
    }
    return search(root->right, key);
}
int count(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + count(root->left) +
           count(root->right);
}
void levelorder(node *root)
{
    if (root == NULL)
    {
        cout << "tree is empty" << "\n";
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << temp->data;
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
}
node *clone(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    node *new_node = new node(root->data);
    new_node->left = clone(root->left);
    new_node->right = clone(root->right);
    return new_node;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 5);
    insert(root, 1);
    insert(root, 3);
    insert(root, 4);
    insert(root, 2);
    insert(root, 7);
    cout << "inorder traversal:" << "\n";
    inorder(root);
    cout << "\n";
    node *search4 = search(root, 4);
    if (search4 != NULL)
    {
        cout << "we have the element " << search4->data << " in the tree" << "\n";
    }
    else
        cout << "there is no key" << "\n";
    cout << "count:" << count(root);
    cout << "\n";
    cout << "levelorder:" << "\n";
    levelorder(root);
    cout << "\n";
    node *cloneroot = clone(root);
    cout << "cloned tree is:" << "\n";
    levelorder(cloneroot);
    cout << "\n";
    return 0;
}