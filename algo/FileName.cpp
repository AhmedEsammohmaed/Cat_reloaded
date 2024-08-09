#include<iostream>
using namespace std;

class stack
{
	int p;
	int top;
	int arr[5];
public:

	stack() : top(-1), p(-1) {}

	void push(int ele)
	{
		if (isempty())
		{
			cout << "is empty";
		}
		else
		{
			top++;
			arr[top] = ele;
			
		}
	}
	void set(int ele)
	{
		if (isempty())
		{
			cout << "is empty";
		}
		else
		{
			p++;
			arr[p] = ele;

		}
	}

	void diplay()
	{
		for (int i = 0; i <= top; i++)
		{
			if (i > 0 && i+1<0)
			{
				set(max(i, i + 1));
				
			}
			else
			{
				continue;
			}

		}
		for (int j=p;j>=0; j++)
		{
			cout << arr[p]<<" ";

		}
	}

	bool isempty()
	{
		return (top <0);
	}
};
int main()
{
	stack s;
	s.push(4);
	s.push(-5);
	s.push(2);
	s.push(9);
	s.push(4);

	s.diplay();

}
