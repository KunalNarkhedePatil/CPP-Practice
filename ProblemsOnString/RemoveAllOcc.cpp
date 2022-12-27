/*
Input:
Enter the String
kunaal
Enter the character
a
Output:
Before Remove Occurance from String is kunaal
After Remove Occurance from String is kunl
*/
#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;
void RemoveAllOcc(char Str[], char ch)
{
    int i = 0;
    int j=0;
    int len = strlen(Str);
    while (i<len)
    {
        if (Str[i] == ch)
        { 
            j=i;
            while (j < len)
            {
                Str[j] = Str[j + 1];
                j++;
            }
            len--;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    char Str[MAX];
    char ch = '\0';

    cout << "Enter the String\n";
    cin.getline(Str, MAX);

    cout << "Enter the character\n";
    cin >> ch;

    cout << "Before Remove Occurance from String is " << Str << endl;
    RemoveAllOcc(Str, ch);
    cout << "After Remove Occurance from String is " << Str << endl;

    return 0;
}