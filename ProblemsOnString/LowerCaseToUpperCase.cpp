#include<iostream>
using namespace std;
#define MAX 100
void LowerCaseToUpperCase(char *Str)
{
    while(*Str!='\0')
    {
        if(*Str>='a'&&*Str<='z')
        {
            *Str=*Str-32;
        }
        Str++;
    }
}
int main()
{
    char str[MAX];
    cout<<"Enter the String\n";
    gets(str);

    LowerCaseToUpperCase(str);
    cout<<"Upper Case String is "<<str;
    return 0;
}