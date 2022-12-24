/*
Enter the number
5
-------------------------
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
-------------------------
*/
#include<iostream>
using namespace std;
void DisplayPattern(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        for(int j=1;j<=iNo;j++)
        {
            if(i+j>=iNo+1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        for(int j=2;j<=i;j++)
        {
            cout<<"* ";
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