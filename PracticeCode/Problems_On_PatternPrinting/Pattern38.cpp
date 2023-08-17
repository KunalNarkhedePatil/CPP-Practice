/*
Enter the number
5
---------------------------
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
----------------------------
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
            for(int j=1;j<=iRows;j++)
            {
                if(i>=j)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            for(int j=1;j<=iRows;j++)
            {
                if(i+j>=iRows+1)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
        for(int i=1;i<=iRows;i++)
        {
            for(int j=1;j<=iRows;j++)
            {
                if(i+j<=iRows+1)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            for(int j=1;j<=iRows;j++)
            {
                if(j>=i)
                {
                    cout<<"* ";
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