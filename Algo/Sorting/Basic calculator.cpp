#include<iostream>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int>stk;
        int result = 0;
        int currentnumber = 0;
        int sign = 1;

        for (int i = 0; i < s.size(); i++)
        {
            char currentchar = s[i];
             
            if (isdigit(currentchar))
                currentnumber = (currentnumber * 10) + (currentchar - '0');
            else if (currentchar == '+')
            {
                result += sign * currentnumber;
                sign = 1;
                currentnumber = 0;
            }
            else if (currentchar == '-')
            {
                result += sign * currentnumber;
                sign = -1;
                currentnumber = 0;
            }
            else if (currentchar == '(')
            {
                stk.push(result);
                stk.push(sign);
                result = 0;
                sign = 1;
            }
            else if (currentchar == ')')
            {
                result += sign * currentnumber;
                currentnumber = 0;

                result *= stk.top(); stk.pop();
                result += stk.top(); stk.pop();

            }
        }
        result += sign * currentnumber;
        return result;
    }
};
int main() {
    Solution solution;
    string expression = "(1+(4+5+2)-3)+(6+8)";

    int result = solution.calculate(expression);
    cout << "The result of the expression \"" << expression << "\" is: " << result << endl;

    return 0;
}