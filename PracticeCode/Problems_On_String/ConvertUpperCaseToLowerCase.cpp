#include <iostream>
using namespace std;
class Demo
{
public:
    bool ConvertUpperCaseToLowerCase(char *Str)
    {
       while(*Str!='\0')
       {
          if(*Str>='A' && *Str<='Z')
          {
              *Str=*Str+32;
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


    dobj->ConvertUpperCaseToLowerCase(Str);
    cout<<Str<<endl;

    return 0;
}