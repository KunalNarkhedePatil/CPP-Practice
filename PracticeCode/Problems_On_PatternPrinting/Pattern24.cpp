/*
Enter the number of rows
5
------------------------
1
1 2       
1   3     
1     4   
1 2 3 4 5 
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
       for(int i=1;i<=iRows;i++)
       {
          for(int j=1;j<=i;j++)
          {
              if(j==1 || i==j|| i==iRows)
              {
                cout<<j<<" ";
              }
              else
              {
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