/*
Case1:
Enter the String
Kunal
String is not Palindrome
---------------------------
Case2:
Enter the String
MadaM
String is Palindrome
--------------------------
*/
#include<iostream>
using namespace std;
#define MAX 100

bool CheckStrPalindrome(char *Start)
{
    int flag=1;
    char *End=Start;

    while(*End!='\0')
    {
        End++;
    }
    End--;
    while(Start<=End)
    {
        if(*Start!=*End)
        {
            flag=0;
            break;
        }
        Start++;
        End--;
    }
    if(flag==1)
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
    char Str[MAX];
    bool bRet=false;

    cout<<"Enter the String\n";
    cin.getline(Str,MAX);

    bRet=CheckStrPalindrome(Str);

    if(bRet==true)
    {
        cout<<"String is Palindrome\n";
    }
    else
    {
        cout<<"String is not Palindrome\n";
    }
    return 0;
}