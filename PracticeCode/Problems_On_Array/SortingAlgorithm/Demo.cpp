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
       for(int i=0;i<iSize;i++)
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
    void SelectionSort()
    {
        int minIndex=0;
        for(int i=0;i<iSize;i++)
        {
            minIndex=i;
            for(int j=i+1;j<iSize;j++)
            {
                if(Arr[minIndex]>Arr[j])
                {
                    minIndex=j;
                }
            }
            int iTemp=Arr[i];
            Arr[i]=Arr[minIndex];
            Arr[minIndex]=iTemp;
        }
    }
    void InsertionSort()
    {
        int i=0;
        int j=0;
        int key=0;

        for(int i=1;i<iSize;i++)
        {
            key=Arr[i]
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

    //dobj->BubbleSort();
    dobj->SelectionSort();
    //dobj->InsertionSort();
    dobj->printArr();
    return 0;
}