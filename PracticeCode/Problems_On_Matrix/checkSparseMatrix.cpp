//in the sparse matrix nonzero element are< zeroelement.
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
       for(int row=0;row<Size;row++)
       {
          for(int col=0;col<Size;col++)
          {
               cin>>Arr[row][col];
          }
       }
   }
   void DisplayMatrix()
   {
      cout<<"Entered Matrix are\n";

      for(int row=0;row<Size;row++)
      {
          for(int col=0;col<Size;col++)
          {
              cout<<Arr[row][col]<<" ";
          }
          cout<<endl;
      }
   }
   bool checkSparseMatrix()
   {
      int iTotalZero=0;
      int iTotalNonZero=0;

      for(int row=0;row<Size;row++)
      {
          for(int col=0;col<Size;col++)
          {
            if(Arr[row][col]==0)
            {
                iTotalZero=iTotalZero+1;
            }
            else
            {
                iTotalNonZero=iTotalNonZero+1;
            }
          }
      }
      if(iTotalZero>iTotalNonZero) //(iTotalZero>row+col/2)
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
    bool bRet=false;

    Demo *dobj=new Demo();
    dobj->AcceptMatrix();
    //dobj->DisplayMatrix();

    if(bRet==true)
    {
        cout<<"Matrix is a Sparse matrix";
    }
    else
    {
        cout<<"Matrix is not Sparse matrix";
    }

    return 0;
}