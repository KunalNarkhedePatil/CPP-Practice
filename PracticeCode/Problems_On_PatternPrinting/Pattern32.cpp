/*
Enter the number
5
-------------------------
        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5 
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
            int k=i;
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
               cout<<k--<<" ";
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