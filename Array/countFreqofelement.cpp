#include <iostream>
using namespace std;
void countFreq(int *Arr, int *Freq)
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        count = 1;
        for (int j = i + 1; j < 10; j++)
        {
            if (Arr[i] == Arr[j])
            {
                count++;
                Freq[j] = 0;
            }
        }
        if (Freq[i] != 0)
        {
            Freq[i] = count;
        }
    }
}
int main()
{
    int Arr[10] = {5, 10, 2, 5, 50, 5, 10, 1, 2, 2};

    int Freq[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    countFreq(Arr, Freq);
    printf("\nFrequency of all elements of array : \n");
    for (int i = 0; i < 10; i++)
    {
        if (Freq[i] != 0)
        {
            printf("%d occurs %d times\n", Arr[i], Freq[i]);
        }
    }

    return 0;
}