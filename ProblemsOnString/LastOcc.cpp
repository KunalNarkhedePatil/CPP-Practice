/*
Input:
Enter the String
My Name is Kunal
Enter the character
a
Output:
Last occurance of a at 14
*/
#include<iostream>
#define MAX 100
using namespace std;
int LastOcc(char *Str,char ch)
{
    int flag=0;
    int index=0;
    while(*Str!='\0')
    {
        if(*Str==ch)
        {
            flag=index;
        }
        Str++;
        index++;
    }
    return flag;
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

    iRet=LastOcc(Str,ch);

    cout<<"Last occurance of "<< ch <<" at "<<iRet<<endl;

    return 0;
}