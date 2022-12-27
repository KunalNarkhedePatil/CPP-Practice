/*
Input:
Enter First String
Kunal
Enter Second String
Narkhede
Output:
Concatenated  String is:Kunal Narkhede
*/
#include<iostream>
using namespace std;
#define MAX 100
void StrConcatX(char str1[],char str2[])
{
    int i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    str1[i++]=' ';
    int j=0;
    while(str2[j]!='\0')
    {
        str1[i++]=str2[j++];
    }
    str1[i]='\0';
}
int main()
{
    char str1[MAX];
    char str2[MAX];

    cout<<"Enter First String\n";
    gets(str1);
    
    cout<<"Enter Second String\n";
    gets(str2);

    StrConcatX(str1,str2);
    cout<<"Concatenated  String is:"<<str1<<endl;
    return 0;
}