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
        for (int i = 0; i < iSize - 1; i++)
        {
            cin >> Arr[i];
        }
    }
    void InsertElement(int iPos, int iNo)
    {
        for (int i = iSize; i >= iPos; i--)
        {
            if (i == iPos)
            {
                Arr[iPos] = iNo;
                break;
            }
            Arr[i] = Arr[i - 1];
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
    int iSize = 0, iPos = 0, iNo = 0, *Arr = NULL;

    cout << "Enter the number of elements in the array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize + 1);
    dobj->readArr();
    cout << "Enter the postion and element\n";
    cin >> iPos >> iNo;
    dobj->InsertElement(iPos-1, iNo);
    dobj->DisplayArr();

    return 0;
}