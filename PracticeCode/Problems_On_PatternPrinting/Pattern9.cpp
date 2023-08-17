/*
Enter the number of rows
5
-----------------------------
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
-----------------------------
*/

#include <iostream>
using namespace std;
class Demo
{
public:
    int iRows;

    Demo(int iRows)
    {
        this->iRows = iRows;
    }
    void DisplayPattern()
    {
        char ch = '\0';
        int j=0;
        for (int i = 1; i <= iRows; i++)
        {
            for (j = 1, ch = 'A'; j <= iRows; j++, ch++)
            {
                cout << ch << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int iRows = 0;

    cout << "Enter the number of rows\n";
    cin >> iRows;

    Demo *dobj = new Demo(iRows);
    dobj->DisplayPattern();
    return 0;
}