/*
Input:
Enter the String
Kunaal
Enter the character
a
Output:
Before Remove First Occ String is Kunaal
After Remove First Occ String is Kunal
*/
#include<iostream>
#include<string.h>
#define MAX 100
using namespace std;
void RemoveFirstOcc(char Str[],char ch)
{
    int i=0;
    int len=strlen(Str);
    while(Str[i]!='\0')
    {
        if(Str[i]==ch)
        {
            while(i<len)
            {
                Str[i]=Str[i+1];
                i++;
            }
            len--;
        }
        i++;
    }
}
int main()
{
    char Str[MAX];
    char ch='\0';

    cout<<"Enter the String\n";
    cin.getline(Str,MAX);

    cout<<"Enter the character\n";
    cin>>ch;
    cout<<"Before Remove First Occ String is "<<Str<<endl;
    RemoveFirstOcc(Str,ch);
    cout<<"After Remove First Occ String is "<<Str<<endl;

    return 0;
}