#include<iostream>
using namespace std;

class linked
{
private:
	struct Node
	{
		int item;
		Node* next;
		Node* prev;
	};
	int count = 0;
	Node* first;
	Node* last;
public:
	linked()
	{
		first = NULL;
		last = NULL;
	}
	bool isempty()
	{
		return (first == NULL);
	}
	
	void insertend(int ele)
	{
		 static Node* newnode = new Node();
		newnode->item = ele;
		if (count == 0)
		{
			first = last = newnode;
			newnode->next = newnode->prev = NULL;
		}
		else
		{
			newnode->prev = last;
			newnode->next = NULL;
			last->next = newnode;
			last = newnode;
		}
		count++;
	}
	void delete_key(int key)
	{
		Node* newnode = first;
		newnode->item = first->item;
		while (newnode->next != NULL)
		{
				Node* cur1 = newnode->prev;
				Node* cur2 = newnode->next;
			if (key == newnode->item)
			{
				cur1->next = cur2;
				cur2->prev = cur1;
				//newnode->prev->next = newnode ->next;
				newnode->next= newnode;

			}
			else
				continue;
			count--;
		
		}
	}
	void delete_even()
	{
		Node* newnode = first;
		
		for(Node*cur=first+1;cur=last;cur+2)
		{
			newnode->next = cur->next;
			cur = NULL;
			}
	}
	void delete_odd()
	{
		Node* newnode = first;

		for (Node* cur = first; cur = last; cur + 2)
		{
			newnode->next = cur->next;
			cur = NULL;
		}
	}
	void middle()
	{
		Node* fast = first;
		Node* slow = first;
		while (fast && fast->next)
		{
			fast = fast->next->next;
			slow = slow->next;
		}
		cout << slow->item;


	}
	void reverse()
		{
		Node* movef = first;
		Node* movel = last;
		while (movef != movel)
		{
			first->item = movel->item;
			last->prev = movel->next;
		}
		}
	void merige(Node* new , Node* new1)
	{
		if (new->first == new1->first)
		{
			
		}
	}
	void display()
	{
		cout << "element........." << endl;
		Node* print = first;
		while (print != NULL)
		{
			cout << print->item << " ";
			print = print->next;
		}
		cout << endl;
	}
};
int main()
{
	linked l;
	l.insertend(1);
	l.insertend(2);
	l.insertend(5);
	l.insertend(4);
	l.delete_even();
	l.insertend(5); 
	l.insertend(4);
	l.insertend(4);
	l.display();
 	//l.delete_even();
}
