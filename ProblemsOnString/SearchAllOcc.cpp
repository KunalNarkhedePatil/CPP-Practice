/*
Input:
Enter the String
Kunal Narkhede
Enter the character
a
Output:
Occurances at 3 7
*/
#include<iostream>
#define MAX 100
using namespace std;
void SearchAllOccu(char *Str,char ch)
{
    int index=0;
    cout<<"Occurances at ";
    while(*Str!='\0')
    {
        if(*Str==ch)
        {
            cout<<index<<" ";
        }
        Str++;
        index++;
    }
}
int main()
{
    char Str[MAX];
    char ch='\0';
    cout<<"Enter the String\n";
    cin.getline(Str,100);
    cout<<"Enter the character\n";
    cin>>ch;


    SearchAllOccu(Str,ch);
    return 0;
}