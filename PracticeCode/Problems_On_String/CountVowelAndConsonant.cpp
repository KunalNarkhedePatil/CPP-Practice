#include <iostream>
using namespace std;
class Demo
{
public:
    void CountVowelAndConsonant(char *Str)
    {
       int iVowel=0;
       int iConsonant=0;

       while(*Str!='\0')
       {
           if((*Str=='a'||*Str=='i'||*Str=='e'||*Str=='o'||*Str=='u')||(*Str=='A'||*Str=='I'||*Str=='E'||*Str=='O'||*Str=='U'))
           {
               iVowel++;
           }
           else if((*Str>='a' && *Str<='z')||(*Str>='A' && *Str<='Z'))
           {
              iConsonant++;
           }
           Str++;
       }
       cout<<"Number of vowel in the string are "<<iVowel<<endl;
       cout<<"Number of consonant in the string are "<<iConsonant<<endl;

    }
};
int main()
{

    Demo *dobj = new Demo();
    char Str[100];

    cout << "Enter the String\n";
    cin >> Str;


    dobj->CountVowelAndConsonant(Str);
    
  

    return 0;
}