/*
Input:
Enter the String
Kunal123
Output:
Number of vowels in string 2
Number of Consonantes in string 3
*/
#include <iostream>
using namespace std;
#define MAX 100
pair<int, int> CountVowelsAndConsonants(char *Str)
{
    pair<int, int> p;
    int CntVowel = 0;
    int CntConsonantes = 0;

    while (*Str != '\0')
    {
        if ((*Str >= 'a' && *Str <= 'z') || (*Str >= 'A' && *Str <= 'Z'))
        {
            if (*Str == 'A' || *Str == 'E' || *Str == 'I' || *Str == 'O' || *Str == 'U' || *Str == 'a' || *Str == 'e' || *Str == 'o' || *Str == 'i' || *Str == 'u')
            {
                CntVowel++;
            }
            else
            {
                CntConsonantes++;
            }
        }
        Str++;
    }
    p = make_pair(CntVowel, CntConsonantes);
    return p;
}
int main()
{
    char str[MAX];
    pair<int, int> p1;
    cout << "Enter the String\n";
    cin.getline(str, MAX);

    p1 = CountVowelsAndConsonants(str);
    cout << "Number of vowels in string " << p1.first << endl;
    cout << "Number of Consonantes in string " << p1.second << endl;

    return 0;
}