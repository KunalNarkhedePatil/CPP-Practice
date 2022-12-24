#include<iostream>
#include<stack>
using namespace std;
bool checkredundantbracket(stack<char> s,char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        char ch=str[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/')
        {
            s.push(ch);

        }
        else
        {
            //for ) or letter

            if(ch==')')
            {
                bool isRedundant=true;
                while(s.top()!='(')
                {
                    char ch=s.top();
                    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
                    {
                        isRedundant=false;
                    }
                    s.pop();
                }
                if(isRedundant==true)
                {
                    return true;
                }
                s.pop();
            }
            
        }
        i++;
    }
    return false;
}
int main()
{
    stack<char> s;
    char str[20];

    cout<<"enter the string\n";
    cin.getline(str,20);

    if(checkredundantbracket(s,str))
    {
        cout<<"there is redundant bracket\n";
    }
    else
    {
        cout<<"there is no redundant bracket\n";
    }
    return 0;
}