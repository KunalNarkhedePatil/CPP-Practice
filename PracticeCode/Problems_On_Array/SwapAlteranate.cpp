#include <iostream>
using namespace std;
class Demo
{
public:
    int *Arr;
    int iSize;
 
    Demo(int iSize)
    {
        this->iSize = iSize;
        Arr = new int[iSize];
        
    }
    void readArr()
    {
        cout << "Enter the element in the array\n";
        for (int i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }
    void Swap(int *p,int *q)
    {
        int iTemp=*p;
        *p=*q;
        *q=iTemp;
    }
    void SwapAlternate(int Arr[])
    {       
        int iTemp=0;
        for(int i=0;i<iSize;i=i+2)
        {
            if(i==iSize-1)
            {
                Arr[i]=Arr[i];
                break;
            }
            Swap(&Arr[i],&Arr[i+1]);
            // iTemp=Arr[i];
            // Arr[i]=Arr[i+1];
            // Arr[i+1]=iTemp;
            // iTemp=0;
        }
    }
    void DisplayArr()
    {
        for (int i = 0; i < iSize; i++)
        {
            cout << Arr[i] << " ";
        }
    }
};
int main()
{
    int iSize = 0, iPos = 0, iNo1 = 0, *Arr = NULL;
    cout << "Enter the number of elements in the array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);
    dobj->readArr();
    dobj->SwapAlternate(dobj->Arr);
    dobj->DisplayArr();

    return 0;
}