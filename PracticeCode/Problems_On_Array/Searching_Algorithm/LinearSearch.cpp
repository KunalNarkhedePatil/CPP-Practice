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
        this->Arr = new int[iSize];
    }

    void readArr()
    {
        for (int i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }
    int LinearSearch(int iNo)
    {
        for(int i=0;i<iSize;i++)
        {
            if(Arr[i]==iNo)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    int iSize = 0, iNo = 0, iRet = 0;
    cout << "Enter the number of element in the array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);
    cout << "Enter the element in the array\n";
    dobj->readArr();

    cout << "Enter the number to search\n";
    cin >> iNo;

    iRet = dobj->LinearSearch(iNo);

    if (iRet == -1)
    {
        cout << iNo << " is not present in the array\n";
    }
    else
    {
        cout << iNo << " is present at the " << iRet << " index\n";
    }

    return 0;
}