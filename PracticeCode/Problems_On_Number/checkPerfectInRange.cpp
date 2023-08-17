#include <iostream>
using namespace std;
bool checkPerfect(int iNo)
{
    int iSum = 0;

    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iSum = iSum + i;
        }
    }
    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void checkPerfectInRange(int iStart, int iEnd)
{
    for(int i=iStart;i<=iEnd;i++)
    {
        if(checkPerfect(i))
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int iStart = 0, iEnd = 0;

    cout << "Enter the range\n";
    cin >> iStart >> iEnd;

    checkPerfectInRange(iStart, iEnd);

    return 0;
}