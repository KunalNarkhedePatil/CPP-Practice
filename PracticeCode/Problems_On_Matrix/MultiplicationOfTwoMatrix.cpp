#include <iostream>
#define Size 3
using namespace std;
class Demo
{
public:
    int Arr[Size][Size];
    int Brr[Size][Size];
    int Crr[Size][Size];

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
    void Multiplication()
    {
        cout << "Multiplication of two matrix\n";
        int sum = 0;
        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                sum = 0;
                for (int i = 0; i < Size; i++)
                {
                    sum = sum + Arr[row][i] * Brr[i][col];
                }
                Crr[row][col] = sum;
            }
        }
    }
    void DisplayMatrix()
    {
        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                cout << Crr[row][col] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Demo *dobj = new Demo();
    dobj->AcceptMatrix();
    dobj->Multiplication();
    dobj->DisplayMatrix();

    return 0;
}