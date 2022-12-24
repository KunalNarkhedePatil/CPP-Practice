#include <iostream>
using namespace std;
void printArr(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}
void DisplaySort(int Arr[], int n)
{
    int i=0,j=0;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                int Temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=Temp;
            }
        }
    }
}
int main()
{
    int Arr[5] = {12, 11, 13, 5, 6};
    printArr(Arr, 5);
    DisplaySort(Arr, 5);
    printArr(Arr, 5);
    return 0;
}