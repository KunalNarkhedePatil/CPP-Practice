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
    void printArr()
    {
        for(int i=0;i<iSize;i++)
        {
            cout<<Arr[i]<<" ";
        }
    }
    void sortEvenOdd()
    {
        int *Brr=new int[iSize];
        int j=0;
        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]%2==0)
            {
                Brr[j]=Arr[i];
                j++;
            }
        }
        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]%2!=0)
            {
                Brr[j]=Arr[i];
                j++;
            }
        }
        for(int i=0;i<iSize;i++)
        {
            Arr[i]=Brr[i];
        }
    }
};
int main()
{
    int iSize = 0;

    cout << "Enter the number of elements in the array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);
    dobj->readArr();
    dobj->sortEvenOdd();
    dobj->printArr();
    
    return 0;
}