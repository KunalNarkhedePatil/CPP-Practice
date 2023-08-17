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
    void SelectionSort()
    {
       int min_index=0;
       int j=0;

       for(int i=0;i<iSize;i++)
       {
          min_index=i;
          for(int j=i+1;j<iSize;j++)
          {
              if(Arr[min_index]>Arr[j])
              {
                  min_index=j;
              }
          }
          int iTemp=Arr[min_index];
          Arr[min_index]=Arr[i];
          Arr[i]=iTemp;
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

    dobj->SelectionSort();
    dobj->printArr();
    return 0;
}