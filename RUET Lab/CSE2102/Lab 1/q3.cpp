#include <bits/stdc++.h>
using namespace std;

bool isOp(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int prece(char op)
{
    if (op == '+' || op == '-')
    {
        return 1;
    }
    else if (op == '*' || op == '/')
    {
        return 2;
    }
    return 0;
}

string inToPo( string &infix)
{
    stack<char> operators;
    stringstream postfix;

    for (char c : infix)
    {
        if (isalnum(c))
        {
            postfix << c;
        }
        else if (isOp(c))
        {
            while (!operators.empty() && prece(operators.top()) >= prece(c))
            {
                postfix << operators.top();
                operators.pop();
            }
            operators.push(c);
        }
        else if (c == '(')
        {
            operators.push(c);
        }
        else if (c == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                postfix << operators.top();
                operators.pop();
            }
            operators.pop();
        }
    }

    while (!operators.empty())
    {
        postfix << operators.top();
        operators.pop();
    }

    return postfix.str();
}

double evaluatePostfix(const string &postfix)
{
    stack<double> operands;

    for (char c : postfix)
    {
        if (isalnum(c))
        {
            operands.push(c - '0');
        }
        else if (isOp(c))
        {
            double op2 = operands.top();
            operands.pop();
            double op1 = operands.top();
            operands.pop();

            switch (c)
            {
            case '+':
                operands.push(op1 + op2);
                break;
            case '-':
                operands.push(op1 - op2);
                break;
            case '*':
                operands.push(op1 * op2);
                break;
            case '/':
                operands.push(op1 / op2);
                break;
            }
        }
    }
    return operands.top();
}

int main(){
    string infx;
    cout << "Enter an infix expression consisting numbers 1 to 9 and +,-,*,/ : ";
    cin>>infx;
    string pstfx = inToPo(infx);
    cout << "Postfix expression : " << pstfx << endl;
    double res = evaluatePostfix(pstfx);
    cout << "Result: " << res << endl;
}
