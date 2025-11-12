#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
void insertAthead(int val){
    struct node* new_node=new node;
    new_node->data=val;
    new_node->prev=NULL;
    if(head==NULL){
        new_node->next=NULL;
        new_node->prev=NULL;
        head=new_node;
        tail=new_node;
    }
    else{
        new_node->prev=NULL;
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
    }
}
void insertAtend(int val){
    struct node* new_node=new node;
    new_node->data=val;
    new_node->next=NULL;
    if(head==NULL){
        new_node->next=NULL;
        new_node->prev=NULL;
        head=new_node;
        tail=new_node;
    }
    else{
        new_node->next=NULL;
        new_node->prev=tail;
        tail->next=new_node;
        tail=new_node;
    }
}
void insertAtposition(int val,int pos){
    if(pos==0){
        cout<<"value must be greater than zero"<<"\n";
    }
    if(pos==1){
        insertAthead(val);
    }
    struct node* prevnode=head;
    for(int i=1;i<(pos-1);i++){
        prevnode=prevnode->next;
    }
    struct node* nextnode=prevnode->next;
    struct node* new_node=new node;
    new_node->data=val;
    new_node->next=nextnode;
    new_node->prev=prevnode;
    prevnode->next=new_node;
    nextnode->prev=new_node;
}
 void deleteAthead(){
    head=head->next;
}
void deleteAtend(){
    tail=tail->prev;
    tail->next=NULL;
}
void deleteAtposition(int pos){
    struct node* prevnode=head;
    for(int i=1;i<(pos-1);i++){
        prevnode=prevnode->next;
    }
    struct node* deletenode=prevnode->next;
    prevnode->next=deletenode->next;
    deletenode->next->prev=prevnode;
    delete deletenode;
}
void getHeadelement(){
    cout<<head->data<<"\n";
}
void getTailelement(){
    cout<<tail->data<<"\n";
}
void getMiddleelement(){
    struct node* fpointer=head;
    struct node* spointer=head;
    while(fpointer!=NULL && fpointer!=NULL){
        spointer=spointer->next;
        fpointer=fpointer->next->next;
    }
    cout<<spointer->data;
}
void display(){
    struct node* currenthead=head;
    while(currenthead!=NULL){
        cout<<currenthead->data<<"\n";
        currenthead=currenthead->next;
    }
}
int main(){
    insertAthead(10);
    insertAthead(20);
    insertAthead(30);
    insertAthead(40);
    insertAthead(50);
    display();
    insertAtend(5);
    cout<<"insertedatend:"<<"\n";
    display();
    insertAtposition(35,3);
    cout<<"insertedstpos:"<<"\n";
    display();
    deleteAthead();
    cout<<"deletedathead:"<<"\n";
    display();
    deleteAtend();
    cout<<"deletedatend:"<<"\n";
    display();
    deleteAtposition(2);
    cout<<"deletedatposition:"<<"\n";
    display();
    cout<<"headelement:";
    getHeadelement();
    cout<<"tailelement:";
    getTailelement();
    cout<<"middleelement:";
    getMiddleelement();
    return 0;
}