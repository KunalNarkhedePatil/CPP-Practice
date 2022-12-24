/*
Enter the number
5
----------------------------
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4   
1 2 3     
1 2       
1
-----------------------------
*/
#include <iostream>
using namespace std;
void DisplayPattern(int Rows)
{
    for(int i=1;i<=Rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=2;i<=Rows;i++)
    {
        for(int j=1;j<=Rows;j++)
        {
            if(i+j<=Rows+1)
            {
               cout<<j<<" ";
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
    int Row = 0;
    cout << "Enter the number\n";
    cin >> Row;

    DisplayPattern(Row);
}