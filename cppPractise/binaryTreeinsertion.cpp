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
node* clone(node* root){
    if(root==NULL){
        return 0;  
    }
    node* new_node=new node(root->data);
    new_node->left=clone(root->left);
    new_node->right=clone(root->right);
    return new_node;
}


void deletedeepest(node* root,node* delnode){
    if(root==NULL){
        return;
    }
    if(root == delnode){
        delete root;
        return;
    }
    if(root->right){
        if(root->right==delnode){
            delete root->right;
            root->right=NULL;
            return;
        }
        deletedeepest(root->right,delnode);
    }
    if(root->left){
        if(root->left==delnode){
            delete root->left;
            root->left=NULL;
            return;
        }
        deletedeepest(root->left,delnode);    
    }
}

node* deleteBstNode(node* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        if(root->data==val){
            delete root;
            return NULL;
        }
        return root;
    }
    queue<node*>q;
    q.push(root);
    node* temp=NULL;
    node* nodetodelete=NULL;
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp->data==val){
            nodetodelete=temp;
        }
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    if(nodetodelete!=NULL){
        int deepestVal = temp-> data;    
        nodetodelete->data=deepestVal;
        deletedeepest(root,temp);
    }
    return root;
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
    cout<<search6<<"\n";
    if(search6){
        cout<<"we have the element in the tree"<<"\n";
    }
    else cout<<"there is no key"<<"\n";
    node* cloneroot=clone(root);
    cout<<"cloned tree is:"<<"\n";
    levelorder(cloneroot);
    node* afterDeletion = deleteBstNode(root, 3);
    cout << "after deletion:" << "\n";
    levelorder(afterDeletion);
    return 0;
}
