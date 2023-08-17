#include <iostream>
using namespace std;
class Demo
{
public:
    bool CountAlphaDigitSpecialChar(char *Str)
    {
        int iAlpha=0;
        int iDigit=0;
        int SC=0;

       while(*Str!='\0')
       {
          if((*Str>='a' && *Str<='z')  || (*Str>='A' && *Str<='Z'))
          {
               iAlpha++;
          }
          else if(*Str>='0' && *Str<='9')
          {
              iDigit++;
          }
          else
          {
              SC++;
          }
          Str++;
       }
       cout<<"Number of alphabet "<<iAlpha<<endl;
       cout<<"Number of Digit "<<iDigit<<endl;
       cout<<"Number of Special character "<<SC<<endl;


    }
};
int main()
{

    Demo *dobj = new Demo();
    char Str[100];

    cout << "Enter the String\n";
    cin >> Str;


    dobj->CountAlphaDigitSpecialChar(Str);


    return 0;
}