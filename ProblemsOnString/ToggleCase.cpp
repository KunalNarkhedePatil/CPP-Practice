/*
Input:
Enter the String
Kunal.
Output:
Toggled String is kUNAL.
*/
#include<iostream>
using namespace std;
#define MAX 100
void ToggleString(char *Str)
{
    while(*Str!='\0')
    {
        if(*Str>='A'&&*Str<='Z')
        {
            *Str=*Str+32;
        }
        else if(*Str>='a'&&*Str<='z')
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

    ToggleString(str);
    cout<<"Toggled String is "<<str;
    return 0;
}