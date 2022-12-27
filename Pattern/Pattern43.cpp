/*
Enter the number
5
-------------------------
        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5 
-------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int Rows)
{
    int k = 0;
    for (int i = 1; i <= Rows; i++)
    {
        k = i;
        for (int j = 1; j <= Rows; j++)
        {
            if (i + j >= Rows + 1)
            {
                cout << k << " ";
                k++;
            }
            else
            {
                cout << "  ";
            }
        }
        k=k-1;
        for (int j = 2; j <=i; j++)
        {
                k=k-1;
                cout << k << " ";
         
        }
        cout << endl;
    }
   
    // cout<<endl;
}
int main()
{
    int Row = 0;
    cout << "Enter the number\n";
    cin >> Row;

    DisplayPattern(Row);

    return 0;
}