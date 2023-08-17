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
    void CountEvenOddAndNeg()
    {
        int iEven = 0, iOdd = 0, iNeg = 0;

        for (int i = 0; i < iSize; i++)
        {
            if(Arr[i]<0)
            {
                iNeg++;
            }
            else if (Arr[i] % 2 == 0)
            {
                iEven++;
            }
            else if (Arr[i] % 2 != 0)
            {
                iOdd++;
            }
            
        }
        cout << "total number of even element in the array are " << iEven << endl;
        cout << "total number of odd element in the array are " << iOdd << endl;
        cout << "total number of Negative element in the array are " << iNeg << endl;
    }
};
int main()
{
    int iSize = 0, *Arr = NULL;

    cout << "Enter the number of elements in the array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);
    dobj->readArr();
    dobj->CountEvenOddAndNeg();
    return 0;
}