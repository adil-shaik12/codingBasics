#include<iostream> 
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
void insertAthead(int val){
    struct node* new_node=new node;
    new_node->data=val;
    new_node->next=head;
    head=new_node;
}
void occurrance(int key) {
    while (head != NULL && head->data == key) {
        struct node* temp = head; 
        head = head->next; 
        delete temp;       
    }
    struct node* prev = head;
    struct node* curr = (head != NULL) ? head->next : NULL; 
    while (curr != NULL) {
        if (curr->data == key) {
            prev->next = curr->next; 
            struct node* temp = curr; 
            curr = curr->next; 
            delete temp;       
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
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
    insertAthead(20);
    insertAthead(40);
    insertAthead(50);
    insertAthead(50);
    display();
    occurrance(20);
    display();
    return 0;
}