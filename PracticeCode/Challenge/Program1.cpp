#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;
bool display(stack<int> &s, int Arr[], int size1, int Brr[], int size2)
{
    if (size1 != size2)
    {
        return false;
    }
    sort(Arr, Arr + 4);
    sort(Brr, Brr + 4);

    int i = 0;
    int j = 0;
    int flag = 0;
    for (i = 0; i < size1; i++)
    {
        if (Arr[i] * Arr[i] != Brr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int *Arr = NULL;
    int *Brr = NULL;
    int size1 = 0;
    int size2 = 0;
    cout << "Enter the size of first array\n";
    cin >> size1;
    Arr = new int[size1];
    cout << "Enter the element in the first array\n";
    for (int i = 0; i < size1; i++)
    {
        cin >> Arr[i];
    }

    cout << "Enter the size of second array\n";
    cin >> size2;

    Brr = new int[size2];
    
    cout << "Enter the element in the second array\n";
    for (int i = 0; i < size2; i++)
    {
        cin >> Brr[i];
    }
    stack<int> s;

    bool bRet = display(s, Arr, size1, Brr, size2);

    if (bRet == true)
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    return 0;
}