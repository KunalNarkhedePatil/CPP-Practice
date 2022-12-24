#include <iostream>
using namespace std;
void printArr(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }
}
void InsertionSort(int Arr[], int size)
{
    int i = 0, j = 0, key = 0;

    for (int i = 1; i < size; i++) //ya llop madhe i=1 yasathi ghetal karan pahila element ha kadhihi sorted asto
    {
        key = Arr[i];
        j = i - 1;
        while (j >= 0 && Arr[j] > key)
        {
            Arr[j + 1] = Arr[j];
            j = j - 1;
        }
        Arr[j + 1] = key;
    }
}
int main()
{
    int Arr[5] = {12, 11, 13, 5, 6};
    printArr(Arr, 5);
    cout << endl;
    InsertionSort(Arr, 5);
    printArr(Arr, 5);
    return 0;
}