#include<iostream>
using namespace std;
bool Display(int Arr[],int key,int size)
{  int i=0;
   int iflag=false;
   for(i=0;i<size;i++)
   {
      if(Arr[i]==key)
      {  
         iflag=true;
         break;
      }
   }
   if(iflag==true)
   {
      return true;
   }
   else
   {
      return false;
   }
}
int main()
{
    int Arr[]={1,2,3,4,5,6,7};

    if(Display(Arr,8,7))
    {
        cout<<"no is present\n";
    }
    else
    {
        cout<<"no is not present\n";
    }


    return 0;
}