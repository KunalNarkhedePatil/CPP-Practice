#include<iostream>
#define Size 3
using namespace std;
class Demo
{
   public:
   int Arr[Size][Size];
   void AcceptMatrix()
   {
       
       cout<<"Enter the element in the matrix\n";
       for(int i=0;i<Size;i++)
       {
          for(int j=0;j<Size;j++)
          {
               cin>>Arr[i][j];
          }
       }
   }
   void DisplayMatrix()
   {
      cout<<"Entered Matrix are\n";

      for(int i=0;i<Size;i++)
      {
          for(int j=0;j<Size;j++)
          {
              cout<<Arr[i][j]<<" ";
          }
          cout<<endl;
      }
   }
   int FindSumOfUpperTriangularMatrix()
   {
       int iSum=0;

       for(int row=0;row<Size;row++)
       {
          for(int col=0;col<Size;col++)
          {
              if(col>row)
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
    int iRet=0;
    Demo *dobj=new Demo();
    dobj->AcceptMatrix();
    //dobj->DisplayMatrix();
    iRet=dobj->FindSumOfUpperTriangularMatrix();

    cout<<"Sum of upper triangular matrix is "<<iRet<<endl;

    return 0;
}