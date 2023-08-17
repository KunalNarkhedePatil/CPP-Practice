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
    bool checkArrPalindromic()
    {
        int iFlag = 0;
        int iStart = 0;
        int iEnd = iSize - 1;

        while (iStart < iEnd)
        {
            if (Arr[iStart] != Arr[iEnd])
            {
                iFlag = 1;
                break;
            }
            iStart++;
            iEnd--;
        }
        if (iFlag == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int iSize = 0;
    bool bRet = false;

    cout << "Enter the number of elements in the array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);
    dobj->readArr();
    bRet = dobj->checkArrPalindromic();

    if (bRet == true)
    {
        cout << "Array is palindromic\n";
    }
    else
    {
        cout << "Array is not palindromic\n";
    }
    return 0;
}