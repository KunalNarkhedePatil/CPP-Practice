#include <iostream>
using namespace std;
void Swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void printArray(int Arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
}
void swapalternate(int Arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            Arr[i] = Arr[i];
            break;
        }
        Swap(&Arr[i], &Arr[i + 1]);
        i++;
    }
}
int main()
{
    int Arr[5] = {1, 2, 3, 4, 5};
    swapalternate(Arr, 5);
    printArray(Arr, 5);
    return 0;
}