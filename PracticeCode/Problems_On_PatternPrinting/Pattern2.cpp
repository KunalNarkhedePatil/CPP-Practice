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
class Demo
{
    public:

    int iRows;

    Demo(int iRows)
    {
        this->iRows=iRows;
    }
    void DisplayPattern()
    {
        for(int i=1;i<=iRows;i++)
        {
            for(int j=iRows;j>=1;j--)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int iRows=0;

    cout<<"Enter the number of rows\n";
    cin>>iRows;

    Demo *dobj=new Demo(iRows);
    dobj->DisplayPattern();
    return 0;
}