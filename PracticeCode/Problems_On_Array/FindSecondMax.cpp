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
            if(Arr[i]<0)
            {
                Arr[i]=-Arr[i];
            }
        }
    }
    int * AssignNegativeValue(int *Arr,int iNo)
    {
         for(int i=0;i<iSize;i++)
         {
            if(Arr[i]==iNo)
            {
                Arr[i]=0;
            }
         }
         return Arr;
    }
    int findSeconddMax()
    {
        int iMax=Arr[0];
        int iFlag=0;
        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]>iMax)
            {
                iMax=Arr[i];

            }
        }
        Arr=AssignNegativeValue(Arr,iMax);
        iMax=Arr[0];
        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]>iMax)
            {
                iMax=Arr[i];
            }
        }
        return iMax;
    }
};
int main()
{
    int iSize=0,*Arr=NULL,iRet=0;

    cout<<"Enter the number of elements in the array\n";
    cin>>iSize;

    Demo *dobj=new Demo(iSize);
    dobj->readArr();
    iRet=dobj->findSeconddMax();

    cout<<"Second maximum number from array is "<<iRet<<endl;
    return 0;
}
