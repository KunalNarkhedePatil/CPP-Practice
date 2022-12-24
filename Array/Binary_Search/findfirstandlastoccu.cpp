#include<iostream>
using namespace std;

int firstoccu(int Arr[],int size,int key)
{
   int start=0;
   int end=size-1;
   int mid=0;
   int ans=-1;
   while(start<=end)
   {
      mid=(start+end)/2;
      if(Arr[mid]==key)
      {
          ans=mid;
          end=mid-1;
      }
      if(key>Arr[mid])
      {
         start=mid+1;
      } 
      else
      {
        end=mid-1;
      }
   }
   return ans;
}
int lastoccu(int Arr[],int size,int key)
{
   int start=0;
   int end=size-1;
   int mid=0;
   int ans=-1;
   while(start<=end)
   {
      mid=(start+end)/2;

      if(Arr[mid]==key)
      {
          ans=mid;
          start=mid+1;
      }
      if(key>=Arr[mid])
      {
        start=mid+1;
      }
      else
      {
        end=mid-1;
      }
   }
   return ans;
}
int main()
{
    int Arr[10]={1,2,3,3,3,3,3,4,5};
    

    cout<<"first occu is "<<firstoccu(Arr,9,3)<<endl;
    cout<<"last occu is "<<lastoccu(Arr,9,3);
    return 0;
}