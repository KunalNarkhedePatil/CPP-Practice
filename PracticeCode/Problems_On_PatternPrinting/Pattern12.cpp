/*
Enter the number of rows
5
------------------------
A 
B B 
C C C 
D D D D 
E E E E E 
-------------------------
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
        int j=0;
        int i=0;
        for(i=1,ch='A';i<=iRows;i++,ch++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<ch<<" ";
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
