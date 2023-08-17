/*
Enter the number of rows
5
-------------------------
A B C D E 
B C D E F 
C D E F G 
D E F G H 
E F G H I 
--------------------------
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
        char k='\0';
        char ch='\0';
        int j=0;
        for(int i=1,k='A';i<=iRows;i++,k++)
        {
            for(j=1,ch=k;j<=iRows;j++,ch++)
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