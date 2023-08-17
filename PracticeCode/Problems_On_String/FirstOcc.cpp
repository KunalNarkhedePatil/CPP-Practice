#include <iostream>
#include <string.h>
using namespace std;
class Demo
{
public:
   int FirstOcc(char *Str,char ch)
   {
      int iCnt=0;

      while(*Str!='\0')
      {
        if(*Str==ch)
        {
            return iCnt;
        }
        iCnt++;
        Str++;
      }
      return -1;
   }
};
int main()
{
    int iRet=0;
    char ch;
    Demo *dobj = new Demo();
    char Str[100];

    cout << "Enter the String\n";
    cin.getline(Str, 100);

    cout<<"Enter the character\n";
    cin>>ch;

    iRet=dobj->FirstOcc(Str,ch);

    if(iRet==-1)
    {
        cout<<"Character are not present in the string\n";
    }
    else
    {
        cout<<"Character are present on "<<iRet<<" index";
    }

   
    return 0;
}