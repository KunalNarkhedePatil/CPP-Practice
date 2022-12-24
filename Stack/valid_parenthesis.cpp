#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
int isMatch(char a, char b)
{
    if ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool valid_parenthesis(char str[])
{
    stack<char> s;
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            else
            {
                if (isMatch(s.top(), str[i]))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    if(s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char str[20] = "{()}";

    if(valid_parenthesis(str))
    {
       cout<<"balanced\n" ;
    }
    else
    {
        cout<<"not balanced\n";
    }
    return 0;
}