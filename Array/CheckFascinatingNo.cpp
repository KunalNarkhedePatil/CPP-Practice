#include<iostream>
#include<string.h>
using namespace std;
int concat(int iNo1,int iNo2,int iNo3)
{
    string str1=to_string(iNo1);
    string str2=to_string(iNo2);
    string str3=to_string(iNo3);

    string s=str1+str2+str3;

    unsigned long long int iRet=stoll(s);
    return iRet;

}
bool   CheckFascinating(int iNo)
{
    int num1=iNo*2;
    int num2=iNo*3;
    unsigned long long int iRet=concat(iNo,num1,num2);
     int Sum=0;
    while(iRet!=0)
    {
        int Digit=iRet%10;
        Sum=Sum+Digit;
        iRet=iRet/10;
    }
    if(Sum==45)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iNo=853;

    bool bRet=CheckFascinating(iNo);
    if(bRet==true)
    {
        cout<<"Fascinating\n";
    }
    else
    {
        cout<<"Not Fascinating\n";
    }
    return 0;
}