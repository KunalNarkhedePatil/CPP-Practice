// in the symmetrix matrix when we transpose the org matrix the then org
// matrix and transpose matrix are eqal.
#include <iostream>
#define Size 3
using namespace std;
class Demo
{
public:
    int Arr[Size][Size];
    int Brr[Size][Size];
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
    void DisplayMatrix(int Arr[][3])
    {
        cout << "Entered Matrix are\n";

        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                cout << Arr[row][col] << " ";
            }
            cout << endl;
        }
    }
    void TransposeOfMatrix()
    {
        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                Brr[row][col] = Arr[col][row];
            }
        }
    }
    bool checkEqaul(int Arr[][3], int Brr[][3])
    {
        int flag = 0;
        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                if (Arr[row][col] != Brr[row][col])
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
    bool checkSymmetricMatrix()
    {
        TransposeOfMatrix();
        // DisplayMatrix(Brr);
        if (checkEqaul(Arr, Brr))
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
    int bRet = false;
    Demo *dobj = new Demo();
    dobj->AcceptMatrix();
    // dobj->DisplayMatrix();

    bRet = dobj->checkSymmetricMatrix();

    if (bRet == true)
    {
        cout << "matrix is Symmetric matrix\n";
    }
    else
    {
        cout << "matrix is not Symmetric matrix\n";
    }

    return 0;
}