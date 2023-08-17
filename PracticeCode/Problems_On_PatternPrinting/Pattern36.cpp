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


// 11 12 13 14 15
// 21 22 23 24 25
// 31 32 33 34 35
// 41 42 43 44 45
// 51 52 53 54 55



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
            for(int j=1;j<=i;j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        for(int i=2;i<=iRows;i++)
        {
            for(int j=1;j<=iRows;j++)
            {
                if(i+j<=iRows+1)
                {
                    cout<<j<<" ";
                }
                else{
                    cout<<"  ";
                }
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