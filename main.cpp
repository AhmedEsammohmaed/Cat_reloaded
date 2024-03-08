#include <iostream>

using namespace std;

class Node
{
  public:
    int data;
    Node*next;
    Node *prev;
    Node()
    {
        data=0;
        next=NULL;
    }
};
class queue
{
    public:
    Node*front;
    Node*rear;
    queue()
    {
        front=rear=NULL;
    }
    bool isempty()
    {
        return front==NULL;
    }
    void enqueueR(int val)
    {
        Node *newnode=new Node();
        newnode->data=val;
        if (isempty())
            front=rear=newnode;
        else{
            rear->next=newnode;
            rear=newnode;
        }
    } void enqueueL(int val)
    {
        Node *newnode=new Node();
        newnode->data=val;
        if (isempty())
            front=rear=newnode;
        else{
           front->prev=newnode;
            newnode->next=front;
            front=newnode;
        }
    }
    int dequeueF()
    {
        int delpoint;
        if (isempty())
        {
            front=rear=NULL;
        }
        else if(front==rear)
        {
            delete front;
        }
        else{
            Node *temp=front;
            front=front->next;
            delpoint=temp->data;
            delete temp;

        }
        return delpoint;
    }
    int dequeueL()
    {
        int delpoint;
        if (isempty())
        {
            front=rear=NULL;
        }
        else if(front==rear)
        {
            delete front;
        }
        else{
            Node *temp=rear;
            rear=rear->prev;
            rear->next=NULL;
            delpoint=temp->data;
            delete temp;

        }
        return delpoint;
    }
    int getfront()
    {
        return front->data;
    }
    int getrear()
    {
        return rear->data;
    }
    int count()
    {
        int counter=0;
        Node *temp=front;
        while(temp!=NULL)
        {
            counter++;
        }
        return counter;
    }
    bool search(int val)
    {

        Node *temp=front;
        while(temp!=NULL)
        {
            if(temp->data==val)
                return true;
            else
                return false;
            temp=temp->next;
        }
    }
    void clear()
    {
        while(!isempty())
        {
            dequeueF();
        }
    }
    void display()
    {
        Node *temp=front;
        while(temp != NULL)
        {
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<endl;
    }

};
int main()
{
    queue q;
 q.enqueueL(10);
  q.enqueueL(20);
   q.enqueueL(30);
   q.display();
   q.dequeueL();
   q.display();
}
