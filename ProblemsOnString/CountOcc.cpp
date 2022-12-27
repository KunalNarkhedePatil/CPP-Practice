/*
Input:
Enter the String
My Name is Kunal
Enter the character
a
Output:
Number of occurance of a in String are 2
*/
#include<iostream>
#define MAX 100
using namespace std;
int CountOcc(char *Str,char ch)
{
    int Count=0;
    while(*Str!='\0')
    {
        if(*Str==ch)
        {
            Count++;
        }
        Str++;
    }
    return Count;
}
int main()
{
    char Str[MAX];
    char ch='\0';
    int iRet=0;

    cout<<"Enter the String\n";
    cin.getline(Str,MAX);

    cout<<"Enter the character\n";
    cin>>ch;

    iRet=CountOcc(Str,ch);

    cout<<"Number of occurance of "<< ch <<" in String are "<<iRet<<endl;

    return 0;
}