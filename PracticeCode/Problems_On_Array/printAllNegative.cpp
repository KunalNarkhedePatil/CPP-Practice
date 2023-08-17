#include<iostream>
using namespace std;
class Demo
{
    public:

    int *Arr;
    int iSize;
    Demo(int iSize)
    {
        this->iSize=iSize;
        Arr=new int[iSize];
    }
    void readArr()
    {
        cout<<"Enter the element in the array\n";
        for(int i=0;i<iSize;i++)
        {
            cin>>Arr[i];
        }
    }
    void printAllNegative()
    {
        cout<<"Negative numbers are\n";
        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]<0)
            {
               cout<<Arr[i]<<" ";
            }
        }
    }
};
int main()
{
    int iSize=0,*Arr=NULL;

    cout<<"Enter the number of elements in the array\n";
    cin>>iSize;

    Demo *dobj=new Demo(iSize);
    dobj->readArr();
    dobj->printAllNegative();
    return 0;
}