#include <iostream>
using namespace std;

void Display(int Rows)
{ 
    for(int i=1;i<=Rows;i++)
    {
        for(int j=1;j<=Rows;j++)
        {
            if(i+j>=Rows+1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=2;i<=Rows;i++)
    {
        for(int j=1;j<=Rows;j++)
        {
            if(j>=i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    Display(5);
    return 0;
}