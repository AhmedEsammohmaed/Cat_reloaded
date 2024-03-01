#include<iostream>
using namespace std;
const int max_size = 100;
template <class t>
class stack {
private:
	int top;
	t item[100];
public:
	stack() :top(-1) {}

	bool push(t ele)
	{
		if (top >= max_size - 1)
		{
			cout << "stack on full";
			return false;
		}
		else
		{
			top++;
			item[top] = ele;
			return true;
		}
	}
	bool isempty()
	{
		return (top < 0);
	}

	bool pop()
	{
		if (isempty())
		{
			cout << "stack is empty";
			return false;
		}
		else
		{
			top--;
			return true;
		}
	}
	bool pop(t& ele)
	{
		if (isempty())
		{
			cout << "stack is empty";
			return false;
		}
		else
		{
			ele = item[top];
			top--;
			return true;
		}
	}
	bool added_element(t& stacktop)
	{
		if (isempty())
		{
			cout << "stackis empty";
			return false;
		}
		else
		{
			stacktop = item[top];
			//cout << stacktop << endl;
			return true;
		}
	}
	bool print()
	{
		cout << "[";
		for (int i = top; i >= 0; i--)
		{
			cout << item[i] << " ";
		}
		cout << "]" << endl;
		return true;
	}

};

int main() {
	stack <int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(30);

	s.print();
}


