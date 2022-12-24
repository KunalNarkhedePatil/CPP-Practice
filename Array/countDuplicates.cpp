#include<iostream>
using namespace std;
int countDuplicate(int *Arr,int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(Arr[i]==Arr[j+1])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
int main()
{
    int Arr[10]={1, 10, 20, 1, 25, 1, 10, 30, 25, 1};
    cout<<"Number of duplicate in the array are "<<countDuplicate(Arr,10);
    return 0;
}