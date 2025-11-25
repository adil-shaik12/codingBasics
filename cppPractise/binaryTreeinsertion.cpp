#include<bits/stdc++.h>
#include<queue>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(node* node){
    if(node==NULL){
        return;
    }
    inorder(node->left);
    cout<<node->data;
    inorder(node->right);
}
void insert(node* root,int val){
    if(root==NULL){
        cout<<"tree is empty!"<<"\n";
    }
    queue<node*>q;
    q.push(root);
    node* new_node=new node(val);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp->left==NULL){
            temp->left=new_node;
            return;
        }
        else{
            q.push(temp->left);
        }
        if(temp->right==NULL){
            temp->right=new_node;
            return;
        }
        else{
            q.push(temp->right);
        }
    }
}
void levelorder(node* root){
    if(root==NULL){
        cout<<"tree is empty!"<<"\n";
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<temp->data;
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    cout<<endl;
}
int count(node* root){
    if(root==NULL){
        return 0;
    }
    return 1 + count(root->left)+
    count(root->right);
}
bool search(node* root,int key){
    if(root==NULL){
        return false; 
    }
    if(root->data==key){
        return true;
    }
    return search(root->left, key) ||search(root->right,key);
}
int main(){
    struct node* root=new node(2);
    root->left=new node(3);
    root->right=new node(4);
    root->left->left=new node(5);
    root->left->right=new node(6);
    insert(root,7);
    inorder(root);
    cout<<"\n"<<"levelorder:"<<"\n";
    levelorder(root);
    cout<<count(root);
    cout<<"\n";
    bool search6 = search(root,6);
    cout<<search6;
    if(search6){
        cout<<"we have the element in the tree"<<"\n";
    }
    else cout<<"there is no key"<<"\n";
    return 0;
}
