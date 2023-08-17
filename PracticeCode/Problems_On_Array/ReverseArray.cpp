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
    void DisplayArr()
    {
       for(int i=0;i<iSize;i++)
       {
           cout<<Arr[i]<<" ";
       }
    }
    void Swap(int *p,int *q)
    {
        int iTemp=*p;
        *p=*q;
        *q=iTemp;
    }
    void ReverseArray(int Arr[])
    {
        int iStart=0;
        int iEnd=iSize-1;

        while(iStart<iEnd)
        {
            Swap(&Arr[iStart],&Arr[iEnd]);
            iStart++;
            iEnd--;
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
    dobj->ReverseArray(dobj->Arr);
    dobj->DisplayArr();
    return 0;
}