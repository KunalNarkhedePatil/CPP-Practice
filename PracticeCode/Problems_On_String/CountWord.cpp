#include <iostream>
using namespace std;
class Demo
{
public:
    int CountWord(char *Str)
    {
        int iWord = 0;

        while (*Str != '\0')
        {
            if (*Str == ' ')
            {
                iWord++;
            }
            Str++;
        }
        return iWord;
    }
};
int main()
{
    int iRet = 0;

    Demo *dobj = new Demo();
    char Str[100];

    cout << "Enter the String\n";
    cin.getline(Str, 100);

    iRet = dobj->CountWord(Str);

    cout << "Number of word in thr string are " << iRet << endl;

    return 0;
}