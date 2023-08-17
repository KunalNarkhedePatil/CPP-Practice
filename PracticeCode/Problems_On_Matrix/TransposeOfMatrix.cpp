#include<iostream>
#define Size 3
using namespace std;
class Demo
{
   public:
   int Arr[Size][Size];
   int Brr[Size][Size];
   void AcceptMatrix()
   {
       
       cout<<"Enter the element in the matrix\n";
       for(int row=0;row<Size;row++)
       {
          for(int col=0;col<Size;col++)
          {
               cin>>Arr[row][col];
          }
       }
   }
   void TransposeOfMatrix()
   {
       for(int row=0;row<Size;row++)
       {
          for(int col=0;col<Size;col++)
          {
              Brr[row][col]=Arr[col][row];
          }
       }
   }
   void DisplayMatrix(int Arr[][3])
   {
      for(int row=0;row<Size;row++)
      {
          for(int col=0;col<Size;col++)
          {
              cout<<Arr[row][col]<<" ";
          }
          cout<<endl;
      }
   }
};
int main()
{
    int iRet=0;
    Demo *dobj=new Demo();
    dobj->AcceptMatrix();
    cout<<"matrix before transpose\n";
    dobj->DisplayMatrix(dobj->Arr);
    dobj->TransposeOfMatrix();
    cout<<"matrix after transpose\n";
    dobj->DisplayMatrix(dobj->Brr);
    return 0;
}