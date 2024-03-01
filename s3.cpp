#include<iostream>
#include<stack>
using namespace std;
bool arepair(char open, char close)
{
	if (open == '(' && close == ')')
		return true;
	else if (open == '{' && close == '}')
		return true;
	else if (open == '[' && close == ']')
		return true;
	else
		return false;
}


bool arepared(string exp)
{
	stack<int> s;
	for (size_t i = 0; i < exp.length(); i++)
	{
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			s.push(i);
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if (s.empty() || !arepair(s.top(), exp[i]))
				return false;
			else
				s.pop();
		}

	}
	return s.empty();
}
int main()
{
	string expresion;
	cin >> expresion;

	if (arepared(expresion))
		cout << "balanced";
	else
		cout << "unbalanced";
}