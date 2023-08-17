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
        cout << "Enter the element in the Arr matrix\n";

        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                cin >> Arr[row][col];
            }
        }
        cout << "Enter the element in the Brr matrix\n";

        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                cin >> Brr[row][col];
            }
        }
    }
    void AddTwoMatrix()
    {

        for (int row = 0; row < Size; row++)
        {
            for (int col = 0; col < Size; col++)
            {
                Crr[row][col] = Arr[row][col] + Brr[row][col];
            }
        }
    }
    void DisplayMatrix()
    {
        cout << "Addition of two matrix\n";
        for(int row=0;row<Size;row++)
        {
            for(int col=0;col<Size;col++)
            {
                cout<<Crr[row][col]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Demo *dobj = new Demo();
    dobj->AcceptMatrix();
    dobj->AddTwoMatrix();
    dobj->DisplayMatrix();
    return 0;
}