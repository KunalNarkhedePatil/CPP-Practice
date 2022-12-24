#include<iostream>
using namespace std;

void firstoccu(int Arr[],int size,int key)
{
   int start=0;
   int end=0;
   int mid=0;
   int ans=0;
   while(start<=end)
   {
      mid=(start+end)/2;
      if(Arr[mid]==key)
      {
          ans=mid;
          end=mid-1;
      }
      if(key>Arr[i])
      {
        
      }
   }
}
void lastoccu(int Arr[],int size,int key)
{

}
int main()
{
    int Arr[7]={1,2,3,3,3,4,5};

    cout<<"first occu is "<<firstoccu(Arr,7,3);
    cout<<"first occu is "<<lastoccu(Arr,7);
    return 0;
}