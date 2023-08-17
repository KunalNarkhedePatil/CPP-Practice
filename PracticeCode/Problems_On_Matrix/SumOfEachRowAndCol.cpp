#include <iostream>
#define Size 3
using namespace std;

class Demo
{
public:
    int Arr[Size][Size];

    void AcceptMatrix()
    {
        cout << "Enter the element in the matrix\n";
        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                cin >> Arr[row][col];
            }
        }
    }
    void SumOfEachRowAndCol()
    {
        int iSum = 0;
        for (int row = 0; row < Size; row++)
        {
            iSum = 0;
            for (int col = 0; col < Size; col++)
            {
                iSum = iSum + Arr[row][col];
            }
            cout << "Sum of elements of Row " << row + 1 << "=" << iSum << endl;
        }
        int col = 0;
        for (int row = 0; row < Size; row++)
        {
            iSum = 0;
            for (col = 0; col < Size; col++)
            {
                iSum = iSum + Arr[col][row];
            }
            
            cout << "Sum of elements of Column " << row + 1 << "=" << iSum << endl;
        }
    }
};
int main()
{
    int iRet = 0;

    Demo *dobj = new Demo();

    dobj->AcceptMatrix();
    dobj->SumOfEachRowAndCol();
    return 0;
}