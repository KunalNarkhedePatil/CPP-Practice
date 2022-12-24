#include<iostream>
#include<string.h>

#include<stack>

using namespace std;

int main()
{
    stack<int> s;

    char str[20]="kunal";
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        char ch=str[i];
        s.push(ch);
    }
    char *Str=new char[n+1];
    int i=0;
    while(s.size()!=0)
    {
       char ch=s.top();
       Str[i]=ch;
       i++;
       s.pop();
    }
    Str[i]='\0';
    
    cout<<Str<<endl;

    return 0;
}