

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