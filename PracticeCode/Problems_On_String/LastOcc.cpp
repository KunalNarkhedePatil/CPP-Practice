#include <iostream>
#include <string.h>
using namespace std;
class Demo
{
public:
   int LastOcc(char *Str,char ch)
   {
      int iCnt=0;
      int iFlag=-1;
      while(*Str!='\0')
      { 
        iCnt++;
        if(*Str==ch)
        {
            iFlag=iCnt;
        }
   
        Str++;
      }
      if(iFlag==-1)
      {
         return -1;
      }
      else
      {
         return iFlag-1;
      }
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

    iRet=dobj->LastOcc(Str,ch);

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