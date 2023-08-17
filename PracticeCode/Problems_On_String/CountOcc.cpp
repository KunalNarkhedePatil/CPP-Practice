#include <iostream>
#include <string.h>
using namespace std;
class Demo
{
public:
   int CountOcc(char *Str,char ch)
   {
       int iCnt=0;

       while(*Str!='\0')  
       {
          if(*Str==ch)
          {
            iCnt++;
          }
          Str++;
       }
       return iCnt;
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

    iRet=dobj->CountOcc(Str,ch);

    cout<<"Number of occ in the string are "<<iRet<<endl;
   
    return 0;
}