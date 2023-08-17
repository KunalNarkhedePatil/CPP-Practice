#include <iostream>
using namespace std;
class Demo
{
public:
    bool StrComX(char *Str,char *Brr)
    {
        int flag=0;

        while(*Str!='\0')  
        {
            if(*Str!=*Brr)
            {
                flag=1;
                break;
            }
            else
            {
                Str++;
                Brr++;
            }
        }
        if(*Str!='\0')
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
int main()
{
    bool bRet = false;

    Demo *dobj = new Demo();
    char Str[100];
    char Brr[100];

    cout << "Enter the String\n";
    cin >> Str;

    cout<<"Enter the another String\n";
    cin>>Brr;


    bRet=dobj->StrComX(Str,Brr);

    if(bRet==true)
    {
        cout<<"String is Equal\n";
    }
    else
    {
        cout<<"String is not Equal\n";
    }
    return 0;
}