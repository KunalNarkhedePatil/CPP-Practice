#include <iostream>
#define Size 3
using namespace std;
class Demo
{
public:
    int Arr[Size][Size];

    void AcceptMatrix()
    {
        cout<<"Enter the element in the matrix\n";
        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                cin >> Arr[row][col];
            }
        }
    }
    void DisplayMatrix()
    {
        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                cout << Arr[row][col] << " ";
            }
            cout << endl;
        }
    }
    void Swap(int *p, int *q)
    {
        int iTemp = *p;
        *p = *q;
        *q = iTemp;
    }
    void InterchangeDiagonal()
    {
        for (int row = 0; row < Size; row++)
        {
            for (int col = 0, k = Size - 1; col < Size && k >= 0; col++, k--)
            {
                if (row == col && row + k == Size - 1)
                {
                    Swap(&Arr[row][col], &Arr[row][k]);
                }
            }
        }
    }
};
int main()
{
    Demo *dobj = new Demo();
    dobj->AcceptMatrix();
    cout << "Before Interchange\n";
    dobj->DisplayMatrix();
    dobj->InterchangeDiagonal();
    cout << "After Interchange\n";
    dobj->DisplayMatrix();

    return 0;
}