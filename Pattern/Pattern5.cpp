/*
Enter the number of rows
5
--------------------------
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
--------------------------
*/
#include<iostream>
using namespace std;
void DisplayPattern(int Rows)
{
    for(int i=1;i<=Rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
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