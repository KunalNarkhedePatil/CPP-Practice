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
    void DeleteElement(int iPos)
    {
        for (int i = iPos; i <iSize-1; i++)
        {
            Arr[i]=Arr[i+1];
        }
    }
    void DisplayArr()
    {
        for (int i = 0; i < iSize-1; i++)
        {
            cout << Arr[i] << " ";
        }
    }
};
int main()
{
    int iSize = 0, iPos = 0, iNo = 0, *Arr = NULL;

    cout << "Enter the number of elements in the array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);
    dobj->readArr();
    cout << "Enter the postion\n";
    cin >> iPos;
    dobj->DeleteElement(iPos-1);
    dobj->DisplayArr();

    return 0;
}