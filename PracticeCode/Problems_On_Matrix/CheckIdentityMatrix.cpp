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
    bool CheckIdentityMatrix()
    {
        int flag = 0;
        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                if (row == col && Arr[row][col] != 1)
                {
                    flag = 1;
                    break;
                }
                else if ((col > row && Arr[row][col] != 0) || (row > col) && Arr[row][col] != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==0)
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
    bRet = dobj->CheckIdentityMatrix();

    if (bRet == true)
    {
        cout << "It is an Identity matrix\n";
    }
    else
    {
        cout << "It is an not Identity matrix\n";
    }
    return 0;
}