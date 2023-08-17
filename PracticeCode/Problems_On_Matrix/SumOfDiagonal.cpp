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
                cout<<Arr[row][col]<<" ";
            }
            cout<<endl;
        }
    }
    int SumOfDiagonal()
    {
       int iSum=0;
       for(int row=0;row<Size;row++)
       {
          for(int col=0;col<Size;col++)
          {
              if(row==col)
              {
                iSum=iSum+Arr[row][col];
              }
          }
       }
       return iSum;
    }
};
int main()
{
    int iRet = 0;
    Demo *dobj = new Demo();

    dobj->AcceptMatrix();
    iRet = dobj->SumOfDiagonal();
    dobj->DisplayMatrix();

    cout << "Sum of Diagonal of matrix is " << iRet << endl;

    return 0;
}