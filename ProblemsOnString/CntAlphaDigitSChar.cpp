/*
Input:
my emailId is narkhedekunal53@gmail.com
Output:
Number of Alphabets is 32
Number of Digit is 2
Number of Others Symbols is 5
*/
#include<iostream>
using namespace std;
#define MAX 100
void CntAlphaDigitSChar(char *Str)
{
    int CntAlphabets=0;
    int CntDigit=0;
    int Others=0;
    while(*Str!='\0')
    {
        if((*Str>='a'&& *Str<='z')||(*Str>='A'&&*Str<='Z'))
        {
            CntAlphabets++;
        }
        else if(*Str>='0' && *Str<='9')
        {
            CntDigit++;
        }
        else
        {
            Others++;
        }
        Str++;
    }
    cout<<"Number of Alphabets is "<<CntAlphabets<<endl;
    cout<<"Number of Digit is "<<CntDigit<<endl;
    cout<<"Number of Others Symbols is "<<Others<<endl;
    
}
int main()
{
    char str[MAX];

    cout<<"Enter the String\n";
    cin.getline(str,MAX);

    CntAlphaDigitSChar(str);
    return 0;
}