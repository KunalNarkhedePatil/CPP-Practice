/*
Case1:
Enter the First String
Kunal 
Enter the Second String
Kunal
Both String are Equal
-----------------------------
Case2:
Enter the First String
Kunal
Enter the Second String
Narkhede
Both String are not Equal
-----------------------------
*/
#include <iostream>
using namespace std;
#define MAX 100
bool StrComX(char str1[], char str2[])
{
    int flag = 1;

    while (*str1 != '\0' && str2 != '\0')
    {
        if (*str1 != *str2)
        {
            flag = 0;
            break;
        }
        str1++;
        str2++;
    }
    if (flag == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char str1[MAX];
    char str2[MAX];
    bool bRet = false;

    cout << "Enter the First String\n";
    gets(str1);
    cout << "Enter the Second String\n";
    gets(str2);

    bRet = StrComX(str1, str2);

    if (bRet == true)
    {
        cout << "Both String are Equal\n";
    }
    else
    {
        cout << "Both String are not Equal\n";
    }

    return 0;
}