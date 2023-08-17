/*
Enter the number of rows
5
--------------------------
        1 
      1 2 1 
    1 2 3 2 2 
  1 2 3 4 3 3 3 
1 2 3 4 5 4 4 4 4
---------------------------
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
          int k=1;
          for(int j=1;j<=iRows;j++)
          {
             if(i+j>=iRows+1)
             {
                cout<<k++<<" ";
             }
             else
             {
                cout<<"  ";
             }
          }
          k=k-2;
          for(int j=2;j<=i;j++)
          {
            cout<<k<<" ";
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