// Solutions to Find Pair Of Integers in Array whose Sum is Given Number

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
    void printPair(int iNo)
    {
        for(int i=0;i<iSize;i++)
        {
            for(int j=i+1;j<iSize;j++)
            {
                if(Arr[i]+Arr[j]==iNo)
                {
                    cout<<"("<<Arr[i]<<","<<Arr[j]<<"),";
                }
            }
        }
    }
};
int main()
{
    int iSize = 0,iNo=0;

    cout << "Enter the number of elements in the array\n";
    cin >> iSize;

    Demo *dobj = new Demo(iSize);
    dobj->readArr();

    cout<<"Enter the whose sum is equal to value\n";
    cin>>iNo;

    dobj->printPair(iNo);
    return 0;
}