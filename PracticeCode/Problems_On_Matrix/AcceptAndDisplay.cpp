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
};
int main()
{
    int iRet=0;
    Demo *dobj=new Demo();
    dobj->AcceptMatrix();
    //dobj->DisplayMatrix();
    return 0;
}