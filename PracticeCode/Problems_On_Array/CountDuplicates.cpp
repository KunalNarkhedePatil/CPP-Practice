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
    int CountDuplicates()
    {
        int i = 0, j = 0, iCnt = 0;
        for (i = 0; i < iSize; i++)
        {
            for (j = i + 1; j < iSize; j++)
            {
                if (Arr[i] == Arr[j])
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
    }
};
int main()
{
    int iSize = 0, *Arr = NULL, iRet = 0;

    cout << "Enter the number of elements in the array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);
    dobj->readArr();
    iRet = dobj->CountDuplicates();

    cout << "number of duplicates in the array are " << iRet << endl;
    return 0;
}