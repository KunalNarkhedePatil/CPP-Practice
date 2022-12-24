/*
Enter the number of rows
5
--------------------------------------------
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
-------------------------------------------
*/
#include<iostream>
using namespace std;
void DisplayPattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
     int Rows=0;

    cout<<"Enter the number of rows\n";
    cin>>Rows;

    DisplayPattern(Rows);
    return 0;
}