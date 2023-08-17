#include <iostream>
using namespace std;
class Demo
{
public:
    bool ConvertLowerCaseToUpperCase(char *Str)
    {
        while(*Str!='\0')
        {
            if(*Str>='a'&& *Str<='z')
            {
                *Str=*Str-32;
            }
            Str++;
        }
    }
};
int main()
{

    Demo *dobj = new Demo();
    char Str[100];

    cout << "Enter the String\n";
    cin >> Str;


    dobj->ConvertLowerCaseToUpperCase(Str);
    cout<<Str<<endl;

    return 0;
}