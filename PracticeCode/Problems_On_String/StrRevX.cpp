#include <iostream>
#include<string.h>
using namespace std;
class Demo
{
public:
    void StrRevX(char Str[])
    {
        int start=0;
        int end=strlen(Str)-1;

        while(start<=end)
        {
           char ch=Str[start];
           Str[start]=Str[end];
           Str[end]=ch;
           start++;
           end--;
        }
    }
};
int main()
{
    int iRet = 0;

    Demo *dobj = new Demo();
    char Str[100];

    cout << "Enter the String\n";
    cin.getline(Str, 100);

    dobj->StrRevX(Str);

    cout<<Str<<endl;

    

    return 0;
}