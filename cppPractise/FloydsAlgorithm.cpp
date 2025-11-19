#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
void insertAthead(int val){
    struct node* new_node = new node;
    new_node->data = val;
    if(head == NULL){
        head = new_node;
        tail = new_node;
        new_node->next = head;
        return;
    }
    new_node->next = head;
    tail->next = new_node;
    head = new_node;
}
bool loop(){
    struct node* spointer = head;
    struct node* fpointer = head;
    while(fpointer!=NULL && fpointer->next!=NULL){
        spointer = spointer->next;
        fpointer = fpointer->next->next;
    if(spointer == fpointer){
        return true;
    }
}
    return false;
}
node* loopStartPoint(){
    if(head == NULL && head -> next == NULL){
        return NULL;
    }
    struct node* spointer = head;
    struct node* fpointer = head;
    struct node * mp = NULL;
    while(fpointer!=NULL && fpointer->next!=NULL){
        spointer=spointer->next;
        fpointer=fpointer->next->next;
    
        if(spointer == fpointer){
            mp = spointer;
            break;
        }
    }
    struct node* p1 = head;
    struct node* p2 = mp;
    while(p1!=p2){
        p1 = p1 -> next;
        p2 = p2 -> next;
    }
    return p1;
}
void display(){
    if(head == NULL){
        cout<<"must be greater"<<"\n";
        return;
    }
    struct node* currnode = head;
    do{
        cout<<currnode->data<<"\n";
        currnode = currnode->next;
    }while(currnode!=head);
}
int main(){
    insertAthead(10);
    insertAthead(20);
    insertAthead(30);
    insertAthead(40);
    insertAthead(50);
    insertAthead(60);
    insertAthead(70);
    display();
    cout<<loop()<<"\n";
    cout<<loopStartPoint() -> data<<"\n";
    struct node* node3 = head;
    node3 = node3 -> next -> next;
    struct node* node6 = head;
    node6 = node6 -> next -> next-> next-> next-> next;
    node6 -> next = node3;
    cout<<loop()<<"\n";
    cout<<loopStartPoint() -> data<<"\n";
    return 0;
}