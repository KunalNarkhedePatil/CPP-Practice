#include <iostream>
using namespace std;
class Demo
{
public:
    void StrConCat(char *Str,char *Brr)
    {
        while(*Str!='\0')
        {
            Str++;
        }
        *Str=' ';
        Str++;
        while(*Brr!='\0')
        {
            *Str=*Brr;
            Str++;
            Brr++;
        }
        *Str='\0';
    }
};
int main()
{
    int iRet = 0;
    Demo *dobj = new Demo();
    char Str[100];
    char Brr[100];

    cout << "Enter the String\n";
    cin >> Str;

    cout<<"Enter the another String\n";
    cin>>Brr;


    dobj->StrConCat(Str,Brr);


    cout<<Str<<endl;

    return 0;
}