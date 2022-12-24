/* 
Enter the number
7
--------------------------
      1 
     2 2 
    3 3 3 
   4 4 4 4 
  5 5 5 5 5 
 6 6 6 6 6 6 
7 7 7 7 7 7 7 
--------------------------
*/
#include <iostream>
using namespace std;

void DisplayPattern(int Rows)
{ 
    for(int i=1;i<=Rows;i++)
    {
        for(int j=1;j<=Rows;j++)
        {
            if(i+j>=Rows+1)
            {
                cout<<i<<" ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
     int Row=0;
    cout<<"Enter the number\n";
    cin>>Row;

    DisplayPattern(Row);
    return 0;
}