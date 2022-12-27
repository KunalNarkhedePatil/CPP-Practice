/*
Input:
Enter the String
My Name is Kunal
Enter the character
K 
Output:
First occurance of K at 11
*/
#include<iostream>
#define MAX 100
using namespace std;
int FirstOcc(char *Str,char ch)
{
    int index=0;
    while(*Str!='\0')
    {
        if(*Str==ch)
        {
            break;
        }
        Str++;
        index++;
    }
    return index;
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

    iRet=FirstOcc(Str,ch);

    cout<<"First occurance of "<< ch <<" at "<<iRet<<endl;

    return 0;
}