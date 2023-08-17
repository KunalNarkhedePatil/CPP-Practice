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
    int SearchElement(int iNo)
    {
        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]==iNo)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    int iSize=0,iNo=0,iRet=0;

    cout<<"Enter the number of elements in the array\n";
    cin>>iSize;

    Demo *dobj=new Demo(iSize);
    dobj->readArr();
    cout<<"Enter the element to search\n";
    cin>>iNo;
    iRet=dobj->SearchElement(iNo);

    if(iRet==-1)
    {
        cout<<"Element is not present in the array\n";
    }
    else
    {
        cout<<"Element present at the "<<iRet<<" index"<<endl;
    }
    return 0;
}