#include<iostream>
using namespace std;
void deleteElements(int Arr[],int ipos,int size)
{
    for(int i=ipos;i<size;i++)
    {
        Arr[i]=Arr[i+1];
    }
}
void deleteDuplcates(int Arr[],int size)
{
     for(int i=0;i<size;i++)
     {
        for(int j=i+1;j<size;j++)
        {
            if(Arr[i]==Arr[j])
            {
                int ipos=j;
                deleteElements(Arr,ipos,size);
                size--;
            }
        }
     }
     for(int i=0;i<size;i++)
     {
        cout<<Arr[i]<<" ";
     }
}
int main()
{
    int Arr[10]={ 10, 20, 10, 1, 100, 10, 2, 1, 5, 10};
    int Size=10;
    deleteDuplcates(Arr,Size);
    
    return 0;
}