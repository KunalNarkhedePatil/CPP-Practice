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
    void DeleteElement(int iPos)
    {
        for(int i=iSize-1;i>iPos;i--)
        {
            Arr[i-1]=Arr[i];
        }
        iSize=iSize-1;
    }
    void DeleteDuplicates()
    {
        for(int i=0;i<iSize;i++)
        {
            for(int j=i+1;j<iSize;j++)
            {
                if(Arr[i]==Arr[j])
                {
                    DeleteElement(j);
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
    dobj->DeleteDuplicates();
    dobj->printArr();
    return 0;
}