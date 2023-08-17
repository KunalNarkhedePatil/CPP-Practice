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
        for (int i = 0; i < iSize; i++)
        {
            cout << Arr[i] << " ";
        }
    }
    void InsertionSort()
    {
        int i=0;
        int j=0;
        int key=0;

       for(i=0;i<iSize;i++)
       {
           key=Arr[i];
           j=i-1;

           while(j>=0 && Arr[j>key])
           {
              Arr[j+1]=Arr[j];
              j--;
           }
           Arr[j+1]=key;
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

    dobj->InsertionSort();
    dobj->printArr();
    return 0;
}