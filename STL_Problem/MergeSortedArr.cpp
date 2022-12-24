#include <iostream>
using namespace std;
void MergeSorted(int Arr1[], int n1, int Arr2[], int n2, int Arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (Arr1[i] < Arr2[j])
        {
            Arr3[k]=Arr1[i];
            k++;
            i++;
        }
        else
        {
            Arr3[k++]=Arr2[j++];     
        }
    }
    while(i<n1)
    {
        Arr3[k++]=Arr1[i++];
    }
    while(j<n2)
    {
        Arr3[k++]=Arr2[j++];
    }
}
void printArr(int Arr[],int size)
{
    for(register int i=0;i<size;i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n1 = 5;
    int n2 = 3;

    int Arr1[5] = {1, 3, 5, 7, 9};
    int Arr2[3] = {2, 4, 6};
    int Arr3[8]={0};
    printArr(Arr1,n1);
    printArr(Arr2,n2);
    MergeSorted(Arr1, 5, Arr2, 3, Arr3);
    printArr(Arr3,8);

    return 0;
}