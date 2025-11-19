#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head=NULL;
void insertAthead(int val){
    struct node* new_node=new node;
    new_node->data=val;
    new_node->next=head;
    head=new_node;
}
void deleteAthead(){
    head=head->next;
}
void display(){
    struct node* currentnode=head;
    while(currentnode!=NULL){
        cout<<currentnode->data<<"\n";
        currentnode=currentnode->next;
    }
}
int main(){
    insertAthead(10);
    insertAthead(20);
    insertAthead(20);
    insertAthead(30);
    insertAthead(30);
    insertAthead(40);
    insertAthead(50);
    insertAthead(50);
    insertAthead(60);
    display();
    cout<<"deletedathead:"<<"\n";
    deleteAthead();
    display();
}