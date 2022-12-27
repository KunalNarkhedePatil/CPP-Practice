/*
Enter the String
Kunal Narkhede
Reverse String is edehkraN lanuK
*/
#include<iostream>
using namespace std;
#define MAX 100
int StrLenX(char *Str)
{
    int Count=0;

    while(*Str!='\0')
    {
        Count++;
        Str++;
    }
    return Count;
}
void StrRevX(char Str[])
{
    int iRet=StrLenX(Str);
    int Start=0;
    int End=iRet-1;
     while(Start<=End)
     {
        char Temp=Str[Start];
        Str[Start]=Str[End];
        Str[End]=Temp;
        Start++;
        End--;
     }
}
int main()
{
    char Str[MAX];

    cout<<"Enter the String\n";
    cin.getline(Str,MAX);

    StrRevX(Str);
    cout<<"Reverse String is "<<Str<<endl;
    return 0;
}