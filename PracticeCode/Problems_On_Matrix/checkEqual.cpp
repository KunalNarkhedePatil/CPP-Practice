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
        cout << "Enter the element in the first matrix\n";

        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                cin >> Arr[row][col];
            }
        }
        cout << "Enter the element in the second matrix\n";

        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                cin >> Brr[row][col];
            }
        }
    }
    bool checkEqualMatrix()
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
};
int main()
{
    bool bRet = false;
    Demo *dobj = new Demo();

    dobj->AcceptMatrix();
    bRet = dobj->checkEqualMatrix();

    if (bRet == true)
    {
        cout << "Both the matrix are equal\n";
    }
    else
    {
        cout << "Both the matrix are not equa\n";
    }

    return 0;
}