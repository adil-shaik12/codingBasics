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
bool isbst(node *root, int min, int max)
{
    if (root == NULL)
    {
        return true;
    }
    return isbst(root->left, min, root->data) &&
           isbst(root->right, root->data, max);
}

node* min(node* root){
    node* current=root;
    while(current && current->left!=NULL){
        current=current->left;
    }
    return current;
}
node* deleteBstNode(node* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(val<root->data){
        root->left=deleteBstNode(root->left,val);
    }
    else if(val>root->data){
        root->right=deleteBstNode(root->right,val);
    }
    else{
        if(root->left==NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }
        node* temp=min(root->right);
        root->data=temp->data;
        root->right=deleteBstNode(root->right,temp->data);
    }
    return root;
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
    node *isbst(root);
    if (isbst)
    {
        cout << "tree is bst" << "\n";
    }
    else{
        cout << "tree is not bst" << "\n";
    }
    node* afterDeletion=deleteBstNode(root,3);
    cout<<"after deletion:"<<"\n";
    levelorder(afterDeletion);
    return 0;
}