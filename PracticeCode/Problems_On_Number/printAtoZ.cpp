#include <iostream>
using namespace std;
void DisplayAtoZ(int iNo)
{
    char ch = 'A';

    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        cout << ch << " ";
    }
}
int main()
{
    DisplayAtoZ(26);
    return 0;
}