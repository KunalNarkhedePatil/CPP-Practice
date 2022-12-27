/*
Input:
Enter the String
Kunal
Enter the character to replace
K
Enter the character to replace with
M
Output:
String After replacing Munal
*/
#include<iostream>
#define MAX 100
using namespace std;
void ReplaceChar(char Str[],char Rch,char RWch)
{
   int i=0;
   while(Str[i]!='\0')
   {
      if(Str[i]==Rch)
      {
         Str[i]=RWch;
         break;
      }
      i++;
   }
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