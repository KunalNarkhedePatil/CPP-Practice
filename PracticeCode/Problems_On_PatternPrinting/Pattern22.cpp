/*
Enter the number of rows
5
-------------------------------
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
--------------------------------
*/

#include <iostream>
using namespace std;
class Demo
{
public:
    int iRows;

    Demo(int iRows)
    {
        this->iRows = iRows;
    }
    void DisplayPattern()
    {
        int k=0;

        for(int i=1;i<=iRows;i++)
        {
            for(int j=1;j<=iRows;j++)
            {
                if(i+j<=iRows+1)
                {
                    cout<<j<<" ";
 
                }
                else 
                {
                    cout<<"* ";
                }
            }
            for(int j=1,k=iRows;j<=iRows;j++,k--)
            {
                if(j>=i)
                {
                    cout<<k<<" ";
                }
                else
                {
                    cout<<"* ";
                }
            }
            cout<<endl;
        }
    }
};
int main()
{
    int iRows = 0;

    cout << "Enter the number of rows\n";
    cin >> iRows;

    Demo *dobj = new Demo(iRows);
    dobj->DisplayPattern();
    return 0;
}