/*print half diamond star pattern
Enter the number of rows
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
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=2;i<=Rows;i++)
    {
        for(int j=1;j<=Rows;j++)
        {
            if(i+j<=Rows+1)
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

    cout<<"Enter the number of rows\n";
    cin>>Rows;

    DisplayPattern(Rows);

    return 0;
}