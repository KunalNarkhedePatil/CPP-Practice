/*
Enter the number of rows
5
------------------------
* * * * * 
  * @ @ * 
    * @ * 
      * * 
        * 
--------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if ((j > i && i == 1) || (j > i && j == n) || (i == j))
      {
        cout << "*"
             << " ";
      }
      else if (j > i)
      {
        cout << "@"
             << " ";
      }
      else
      {
        cout << " "
             << " ";
      }
    }
    cout << endl;
  }
}
int main()
{
  int Rows = 0;

  cout << "Enter the number of rows\n";
  cin >> Rows;

  DisplayPattern(Rows);
  return 0;
}