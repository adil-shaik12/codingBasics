#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertAthead(int val)
{
    struct node *new_node = new node;
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}
void insertAtposition(int val, int pos)
{
    if (pos == 0)
    {
        cout << "must be greater thwn zero" << "\n";
        return;
    }
    if (pos == 1)
    {
        insertAthead(val);
        return;
    }
    struct node *prevnode = head;
    for (int i = 1; i < (pos - 1); i++)
    {
        prevnode = prevnode->next;
    }
    struct node *new_node = new node;
    new_node->data = val;
    new_node->next = prevnode->next;
    prevnode->next = new_node;
}
void insertAtend(int val)
{
    struct node *new_node = new node;
    new_node->data = val;
    new_node->next = NULL;
    struct node *helperpointer = head;
    while (helperpointer->next != NULL)
    {
        helperpointer = helperpointer->next;
    }
    helperpointer->next = new_node;
}
void deleteAthead(){
    struct node *currenthead=head;
    head=head->next;
}
void deleteAtend(){
    struct node *helperpointer=head;
    while(helperpointer->next->next!=NULL){
        helperpointer=helperpointer->next;
    }
    helperpointer->next=NULL;
}
void deleteAtposition(int pos){
    struct node* current=head;
    for(int i=1;i<(pos-1);i++){
        current=current->next;
    }
    struct node* notetodelete=current->next;
    current->next=notetodelete->next;
}
void getheadelement(){
    cout<<"headelement"<<head->data<<"\n";
}
void getendelement(){
    struct node* helperpointer=head;
    while(helperpointer->next!=NULL){
        helperpointer=helperpointer->next;
    }
    cout<<"endelement:"<<helperpointer->data<<"\n";
}
void getmiddleelement(){
    struct node* spointer=head;
    struct node* fpointer=head;
    while(fpointer!=NULL && fpointer->next!=NULL ){
        spointer=spointer->next;
        fpointer=fpointer->next->next;
    }
    cout<<"middel element:"<<spointer->data<<"\n";
}
void display()
{
    struct node *currenthead = head;
    while (currenthead != NULL)
    {
        cout << currenthead->data << "\n";
        currenthead = currenthead->next;
    }
}
int main()
{
    cout << "train is empty" << "\n";
    insertAthead(10);
    insertAthead(20);
    insertAthead(30);
    insertAthead(40);
    cout<<"after inserted:"<<"\n";
    display();
    insertAtposition(21, 3);
    cout << "inserted:" << "\n";
    display();
    insertAtposition(22, 4);
    cout << "inserted:" << "\n";
    display();
    insertAtposition(23, 5);
    cout << "inserted:" << "\n";
    display();
    insertAtposition(24, 6);
    cout << "inserted:" << "\n";
    display();
    insertAtend(5);
    cout << "inserted:" << "\n";
    display();
    deleteAthead();
    cout << "deleted:" << "\n";
    display();
    deleteAtend();
    cout << "deletedatend:" << "\n";
    display();
    deleteAtposition(5);
    cout << "deletedatposition:" << "\n";
    display();
    getheadelement();
    getendelement();
    getmiddleelement();
    return 0;
}