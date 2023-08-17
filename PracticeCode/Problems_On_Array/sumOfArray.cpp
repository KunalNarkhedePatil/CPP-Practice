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
    int sumOfArr()
    {
       int iSum=0;

       for(int i=0;i<iSize;i++)
       {
          if(Arr[i]<0)  //negative number are not add
          {
            continue;
          }
          else
          {
             iSum=iSum+Arr[i];
          }
       }
       return iSum;
    }
};
int main()
{
    int iSize=0,*Arr=NULL,iRet=0;

    cout<<"Enter the number of elements in the array\n";
    cin>>iSize;

    Demo *dobj=new Demo(iSize);
    dobj->readArr();

    iRet=dobj->sumOfArr();

    cout<<"Sum of all elements in the array are "<<iRet<<endl;
    return 0;
}