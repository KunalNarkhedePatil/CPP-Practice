/*
Input:
Enter the String
Kunanal
Enter the character
n
Ouput:
Before Remove Last Occ String is Kunanal
After Remove Last Occ String is Kunaal
*/
#include<iostream>
#include<string.h>
#define MAX 100
using namespace std;
void RemoveLastOcc(char Str[],char ch)
{
    int i=0;
    int flag=0;
    int index=0;
    int len=strlen(Str);
    while(Str[i]!='\0')
    {
        if(Str[i]==ch)
        {
            flag=index;
        }
        i++;
        index++;
    }
    i=flag;
    while(i<len)
    {
        Str[i]=Str[i+1];
        i++;
    }
    len--;

}
int main()
{
    char Str[MAX];
    char ch='\0';

    cout<<"Enter the String\n";
    cin.getline(Str,MAX);

    cout<<"Enter the character\n";
    cin>>ch;
    cout<<"Before Remove Last Occ String is "<<Str<<endl;
    RemoveLastOcc(Str,ch);
    cout<<"After Remove Last Occ String is "<<Str<<endl;

    return 0;
}