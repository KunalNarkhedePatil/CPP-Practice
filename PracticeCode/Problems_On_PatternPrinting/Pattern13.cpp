/*
Enter the number of rows
5
---------------------
A 
B C 
D E F 
G H I J 
K L M N O
-----------------------
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
        char ch='A';
        for(int i=1;i<=iRows;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<ch++<<" ";
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