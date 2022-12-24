/*
Enter the number
5
--------------------------
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
---------------------------
*/
#include<iostream>
using namespace std;
void DisplayPattern(int Rows)
{
    
    for(int i=1;i<=Rows;i++)
    {
        for(int j=1;j<=Rows;j++)
        {
            if(i+j>=Rows+1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=2;i<=Rows;i++)
    {
        for(int j=1;j<=Rows;j++)
        {
            if(j>=i)
            {
                cout<<"* ";
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
    int Row = 0;
    cout << "Enter the number\n";
    cin >> Row;

    DisplayPattern(Row);

    return 0;
}