#include<iostream>
using namespace std;


class Node
{
public:    
    int data;
    Node* next;

};

class linked
{
public:
Node* head;
 linked()
 {
    head=NULL;
 }
bool isempty()
{
    return (head==NULL);
}

void insertend(int item)
{
    Node* newnode;
if (isempty())
{
    newnode->data=item;
    newnode->next=NULL;
    head=newnode;
}
else
{
    newnode->data=item;
    newnode->next=head;
    head=newnode;

}
}
void insertfront(int item)
{
    Node* newnode;
    newnode->data=item;
 if (isempty())
 {
     newnode->next=NULL;
     newnode=head;
 }
 else
 {
     newnode->next=head;
     newnode=head;
 
 }
}
void display()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }

}


};

int main()
{
    linked lst;
    if (lst.isempty())
    cout<<"empty";
    else{
        cout<<"not empty";
    }
    lst.insertend(5);
    lst.insertend(6);
    lst.display();
    lst.insertend(10);
    lst.insertend(20);
    lst.display();
    
}
