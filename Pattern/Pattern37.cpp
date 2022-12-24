/*print hollow inverted pyramid star pattern
   Enter the number
5
-------------------------------
* * * * * * * * * 
  *           *   
    *       *     
      *   *       
        *
-------------------------------
*/
#include<iostream>
using namespace std;
void DisplayPattern(int Rows)
{
    for(int i=1;i<=Rows;i++)
    {
        for(int j=1;j<=Rows;j++)
        {
            if(i==1||i==j)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        for(int j=2;j<=Rows;j++)
        {
            if(i+j==Rows+1||i==1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int Rows=0;

    cout<<"Enter the number\n";
    cin>>Rows;

    DisplayPattern(Rows);
    return 0;
}