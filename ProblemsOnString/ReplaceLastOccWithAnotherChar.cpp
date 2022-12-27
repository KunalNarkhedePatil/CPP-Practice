/*
Input:
Enter the String
KunaK
Enter the character to replace
K
Enter the character to replace with
l
Output:
String After replacing Kunal
*/
#include<iostream>
#define MAX 100
using namespace std;
void ReplaceChar(char Str[],char Rch,char RWch)
{
   int i=0;
   int flag=0;
   while(Str[i]!='\0')
   {
      if(Str[i]==Rch)
      {
         flag=i;
      }
      i++;
   }
   Str[flag]=RWch;
}
int main()
{
    char Str[MAX];
    char Rch='\0';//replace character
    char RWch='\0';//replace with character

    cout<<"Enter the String\n";
    cin.getline(Str,MAX);

    cout<<"Enter the character to replace\n";
    cin>>Rch;

    cout<<"Enter the character to replace with\n";
    cin>>RWch;
    
    ReplaceChar(Str,Rch,RWch);
    cout<<"String After replacing "<<Str<<endl;
    return 0;
}