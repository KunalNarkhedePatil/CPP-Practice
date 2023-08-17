/*
Enter the number of rows
5
------------------------
        1
      2 3
    4 5 6
  7 8 9 10
11 12 13 14 15
-------------------------
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
        int k = 1;
        for (int i = 1; i <= iRows; i++)
        {
            for (int j = 1; j <= iRows; j++)
            {
                if (i + j >= iRows + 1)
                {
                    cout << k++ << " ";
                }
                else
                {
                    cout << "  ";
                }
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