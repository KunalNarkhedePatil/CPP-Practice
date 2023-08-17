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
    void printArr()
    {
        for(int i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<" ";
        }
    }
    void rotateByOne()
    {
        int first=Arr[0];
        for(int i=0;i<iSize-1;i++)
        {
           Arr[i]=Arr[i+1];
        }
        Arr[iSize-1]=first;
    }
    void leftRotate(int N)
    {
        for(int i=1;i<=N;i++)
        {
            rotateByOne();
        }
    }
};
int main()
{
    int iSize=0,N=0;

    cout<<"Enter the number of elements in the array\n";
    cin>>iSize;

    Demo *dobj=new Demo(iSize);
    dobj->readArr();

    cout<<"Enter the number of times to left rotate\n";
    cin>>N;

    dobj->leftRotate(N);
    dobj->printArr();
    return 0;
}