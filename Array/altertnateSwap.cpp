#include <iostream>
using namespace std;
void swap(int *p1, int *p2)
{
    int *temp;
    *temp = *p1;
    *p1 = *p2;
    *p2 = *temp;
}
void solve(int Arr[], int size)
{
    int i = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            Arr[i] = Arr[i];
            break;
        }
        swap(Arr[i], Arr[i + 1]);
        i = i + 1;
    }
}
int main()
{
    //int Arr[6] = {1, 2, 3, 4, 5,6};
    int Arr[5] = {1, 2, 3, 4, 5};

    solve(Arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << Arr[i] << " ";
    }
    return 0;
}