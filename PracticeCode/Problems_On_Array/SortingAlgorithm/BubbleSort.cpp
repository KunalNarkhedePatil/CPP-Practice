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
    void BubbleSort()
    {
       for(int i=0;i<iSize-1;i++)
       {
          for(int j=0;j<iSize-i-1;j++)
          {
              if(Arr[j]>Arr[j+1])
              {
                  int iTemp=Arr[j];
                  Arr[j]=Arr[j+1];
                  Arr[j+1]=iTemp;
              }
          }
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

    dobj->BubbleSort();
    dobj->printArr();
    return 0;
}