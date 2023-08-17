#include <iostream>
#include <string.h>
using namespace std;
class Demo
{
public:
    bool CheckStrPalindromic(char Str[])
    {
        int start = 0;
        int end = strlen(Str) - 1;
        int iFlag = 0;

        while (start <= end)
        {
            if (Str[start] != Str[end])
            {
                iFlag = 1;
                break;
            }
            start++;
            end--;
        }
        if (iFlag == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    bool bRet = false;

    Demo *dobj = new Demo();
    char Str[100];

    cout << "Enter the String\n";
    cin.getline(Str, 100);

    bRet = dobj->CheckStrPalindromic(Str);

    if (bRet == true)
    {
        cout << "String is Palindromic\n";
    }
    else
    {
        cout << "String is not Palindromic\n";
    }

    return 0;
}