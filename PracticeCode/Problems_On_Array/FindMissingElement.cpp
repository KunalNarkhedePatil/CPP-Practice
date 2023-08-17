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
    int SumOfNaturalInRange(int iStart,int iEnd)
    {
        int iSum=0;
        for(int i=iStart;i<=iEnd;i++)
        {
           iSum=iSum+i;
        }
        return iSum;
    }
    int findMissingElement()
    {
        int iSum=0,iRet=0,iAns=0;
        iRet=SumOfNaturalInRange(Arr[0],Arr[iSize-1]);
        for(int i=0;i<iSize;i++)
        {
           iSum=iSum+Arr[i];
        }
        iAns=iRet-iSum;
        return iAns;
    }
};
int main()
{
    int iSize=0,iRet=0;

    cout<<"Enter the number of elements in the array\n";
    cin>>iSize;

    Demo *dobj=new Demo(iSize);
    dobj->readArr();
    iRet=dobj->findMissingElement();
    cout<<"missing number in the array is "<<iRet<<endl;

    return 0;
}