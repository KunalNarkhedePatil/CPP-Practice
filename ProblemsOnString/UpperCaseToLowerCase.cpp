/*
Case1:
Input:
Enter the String
KUNAL
Output:
Lower Case String is kunal
------------------------------
Case2
Input:
Enter the String
KuNal
Output:
Lower Case String is kunal
--------------------------------
*/
#include<iostream>
using namespace std;
#define MAX 100
void UpperCaseToLowerCase(char *Str)
{
    while(*Str!='\0')
    {
        if(*Str>='A'&&*Str<='Z')
        {
            *Str=*Str+32;
        }
        Str++;
    }
}
int main()
{
    char str[MAX];
    cout<<"Enter the String\n";
    gets(str);

    UpperCaseToLowerCase(str);
    cout<<"Lower Case String is "<<str;
    return 0;
}