#include <iostream>
using namespace std;
class Demo
{
public:
    int *Arr;
    int *Brr;
    int iSize;
    Demo(int iSize)
    {
        this->iSize = iSize;
        Arr = new int[iSize];
        Brr = new int[iSize];
    }
    void readArr()
    {
        cout << "Enter the element in the array\n";
        for (int i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }
    void DisplayArr()
    {
        for (int i = 0; i < iSize; i++)
        {
            cout << Brr[i] << " ";
        }
    }
    void CopyArr()
    {
        for (int i = 0; i < iSize; i++)
        {
            Brr[i]=Arr[i];
        }
    }
};
int main()
{
    int iSize = 0, *Arr = NULL, *Brr = NULL;

    cout << "Enter the number of elements in the array\n";
    cin >> iSize;
   
    Demo *dobj = new Demo(iSize);

    dobj->readArr();
    dobj->CopyArr();
    
    cout<<"Copied Array\n";
    dobj->DisplayArr();
    return 0;
}