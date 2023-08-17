#include <iostream>
using namespace std;
class Demo
{
public:
    int *Arr, *EvenArr, *OddArr, iEvenSize, iOddSize;
    int iSize;
    Demo(int iSize)
    {
        this->iSize = iSize;
        Arr = new int[iSize];
        EvenArr = new int[iSize];
        OddArr = new int[iSize];
    }
    void readArr()
    {
        cout << "Enter the element in the array\n";
        for (int i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }
    void EvenOddSeparate()
    {
        int j = 0, k = 0;
        for (int i = 0; i < iSize; i++)
        {
            if (Arr[i] % 2 == 0)
            {
                EvenArr[j] = Arr[i];
                j++;
            }
            else
            {
                OddArr[k] = Arr[i];
                k++;
            }
        }
        iEvenSize = j;
        iOddSize = k;
    }
    void DisplayArr()
    {
        cout << "Even Array is \n";
        for (int i = 0; i < iEvenSize; i++)
        {
            cout << EvenArr[i] << " ";
        }
        cout << "\nOdd Array is \n";
        for (int j = 0; j < iOddSize; j++)
        {
            cout << OddArr[j] << " ";
        }
    }
};
int main()
{
    int iSize = 0, *Arr = NULL;

    cout << "Enter the number of elements in the array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);
    dobj->readArr();
    dobj->EvenOddSeparate();
    dobj->DisplayArr();

    return 0;
}