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
    void ScalarMatrixMultiplication()
    {
        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                Arr[row][col] = Arr[row][col] * 2;
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
};
int main()
{
    Demo *dobj = new Demo();

    dobj->AcceptMatrix();
    dobj->ScalarMatrixMultiplication();
    dobj->DisplayMatrix();
    return 0;
}