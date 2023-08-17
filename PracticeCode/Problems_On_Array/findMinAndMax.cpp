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
    void findMinAndMax()
    {
        int iMax = 0, iMin = 0;
        iMax = Arr[0];
        iMin = Arr[0];
        for (int i = 0; i < iSize; i++)
        {

            if (Arr[i] > iMax)
            {
                iMax = Arr[i];
            }
            if (Arr[i] < iMin)
            {
                iMin = Arr[i];
            }
        }
        cout<<"Maximum element in the array are "<<iMax<<endl;
        cout<<"Minimum element in the array are "<<iMin<<endl;
    }
};
int main()
{
    int iSize = 0, *Arr = NULL;

    cout << "Enter the number of elements in the array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);
    dobj->readArr();
    dobj->findMinAndMax();
    return 0;
}