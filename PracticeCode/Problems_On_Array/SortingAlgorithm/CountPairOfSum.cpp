#include <iostream>
using namespace std;
class Demo
{
public:
    int *Arr;
    int *Brr;
    int iSize;
    Demo(int iSize)
    {
        this->iSize = iSize;
        Arr = new int[iSize];
        Brr = new int[iSize];
    }
    void readArr()
    {
        cout << "Enter the element in the array\n";
        for (int i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }
    void DisplayArr()
    {
        for (int i = 0; i < iSize; i++)
        {
            cout << Brr[i] << " ";
        }
    }
    int CountPairOfSum(int iNo)
    {
        int iCnt=0;
       for(int i=0;i<iSize;i++)
       {
           for(int j=0;j<iSize;j++)
           {
              if(i+j==iNo)
              {
                  iCnt++;
              }
           }
       }
       return iCnt;
    }
    
};
int main()
{
    int iSize = 0, *Arr = NULL, *Brr = NULL,iNo=0;

    cout << "Enter the number of elements in the array\n";
    cin >> iSize;
   
    Demo *dobj = new Demo(iSize);

    cout<<"Enter the number to count pair\n";
    cin>>iNo;

    dobj->readArr();
    int iRet=dobj->CountPairOfSum(iNo);

    cout<<"Number of pair of sum is "<<iRet<<endl;
    return 0;
}