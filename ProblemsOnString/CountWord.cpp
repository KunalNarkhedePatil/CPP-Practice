#include<iostream>
using namespace std;
#define MAX 100

int CountWord(char *Str)
{
    int count=0;
    while(*Str!='\0')
    {
        if(*Str==' '||*Str=='\n'||*Str==',')
        {
            count++;
        }
        Str++;
    }
    return count+1;
}
int main()
{
    char str[100];
    int iRet=0;
    cout<<"Enter the String\n";
    cin.getline(str,100);
 
    iRet=CountWord(str);
    cout<<"Number of word in the string are "<<iRet;

    return 0;
}