/*
Enter the number of rows
5
-----------------
D 
C D 
B C D 
A B C D
-------------------
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
        int i=0;
        int j=0;
        char k='\0';
        char ch='\0';
        for(i=1,k='E';i<=iRows;i++,k--)
        {
            for(j=1,ch=k;j<=i;j++,ch++)
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