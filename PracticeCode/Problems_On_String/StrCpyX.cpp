#include <iostream>
using namespace std;
class Demo
{
public:
    void StrCpyX(char *Str,char *Brr)
    {
        while(*Str!='\0')
        {
            *Brr=*Str;
            Str++;
            Brr++;
            
        }
        *Brr='\0';
    }
};
int main()
{
    int iRet = 0;
    Demo *dobj = new Demo();
    char str[100];
    char CpyStr[100];

    cout << "Enter the String\n";
    cin >> str;

    dobj->StrCpyX(str,CpyStr);


    cout<<CpyStr<<endl;

    return 0;
}