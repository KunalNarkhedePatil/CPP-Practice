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
    bool CheckLowerTriangularMatrix()
    {
        int flag = 0;
        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                if (row > col && Arr[row][col] != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
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
    bool bRet = false;

    Demo *dobj = new Demo();

    dobj->AcceptMatrix();
    // dobj->DisplayMatrix()
    bRet = dobj->CheckLowerTriangularMatrix();

    if (bRet == true)
    {
        cout << "Matrix is lower triangular\n";
    }
    else
    {
        cout << "Matrix is not lower triangular\n";
    }
    return 0;
}