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
void deleteDuplicate(){
    struct node* helperpointer=head;
    while(helperpointer!=NULL && helperpointer->next!=NULL){
        if(helperpointer->data==helperpointer->next->data){
            struct node* notetodelete=helperpointer->next;
            helperpointer->next=notetodelete->next;
            delete notetodelete;
        }
        else{
            helperpointer=helperpointer->next;
        }
    }
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
    deleteDuplicate();
    cout<<"deleteduplicate:"<<"\n";
    display();
}