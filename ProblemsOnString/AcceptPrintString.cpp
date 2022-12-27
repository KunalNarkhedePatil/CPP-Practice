/*
Input:
Enter the String
Kunal Narkhede.
Output:
Entered String is Kunal Narkhede.
*/
#include <iostream>
using namespace std;
void DisplayString(char str[])
{

    cout << "Entered String is " << str << endl;
}
int main()
{
    char str[100];

    cout << "Enter the String\n";
    cin.get(str, 100);
    DisplayString(str);
    return 0;
}