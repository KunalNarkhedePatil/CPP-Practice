#include<iostream>
using namespace std;
class Demo
{
    public:

    int *Arr,*Brr,*Crr;
    int iSize1,iSize2,iSize3=0;
    Demo(int iSize1,int iSize2)
    {
        this->iSize1=iSize1;
        this->iSize2=iSize2;
        this->iSize3=iSize1+iSize2;
        Arr=new int[iSize1];
        Brr=new int[iSize2];
        Crr=new int[iSize3];
    }
    void readArr()
    {
        cout<<"Enter the element in the Arr\n";
        for(int i=0;i<iSize1;i++)
        {
            cin>>Arr[i];
        }
    }
    void readBrr()
    {
        cout<<"Enter the element in the Brr\n";
        for(int i=0;i<iSize2;i++)
        {
            cin>>Brr[i];
        }
    }
    void MergeArray()
    {
        int j=0;
        for(int i=0;i<iSize1;i++)
        {
           Crr[j]=Arr[i];
           j++;
        }
        for(int i=0;i<iSize2;i++)
        {
            Crr[j]=Brr[i];
            j++;
        }
    }
    void DisplayArr()
    {
       for(int i=0;i<iSize3;i++)
       {
          cout<<Crr[i]<<" ";
       }
    }
};
int main()
{
    int iSize1=0,iSize2=0,*Arr=NULL;

    cout<<"Enter the number of elements in the Arr\n";
    cin>>iSize1;

    cout<<"Enter the number of elements in the Brr\n";
    cin>>iSize2;

    Demo *dobj=new Demo(iSize1,iSize2);
    dobj->readArr();
    dobj->readBrr();
    dobj->MergeArray();
    dobj->DisplayArr();
    return 0;
}