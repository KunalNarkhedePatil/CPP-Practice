/*
Input:
Enter the String
Kunal Narkhede.
Output:
Length of string is 15
*/
#include<iostream>
using namespace std;
int strlenX(char Str[])
{
    int iCnt=0;
    int i=0;
    while(Str[i]!='\0')
    {
        iCnt++;
        i++;
    }
    return iCnt;
    
}
int main()
{
    char str[100];
    int iRet=0;

    cout<<"Enter the String\n";
    cin.get(str,100);

    iRet=strlenX(str);
    cout<<"Length of string is "<<iRet<<endl;
    return 0;
}