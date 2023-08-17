#include <iostream>
using namespace std;
class Demo
{
public:
    void printStr(char Str[])
    {
        cout << Str << endl;
    }

    int StrLenX(char *Str)
    {
        int iCnt = 0;
        while (*Str != '\0')
        {
            iCnt++;
            Str++;
        }
        return iCnt;
    }
};
int main()
{
    int iRet = 0;
    Demo *dobj = new Demo();
    char str[100];

    cout << "Enter the String\n";
    cin >> str;

    iRet = dobj->StrLenX(str);

    cout << "Length of given string is " << iRet << endl;

    // dobj->printStr(str);

    return 0;
}