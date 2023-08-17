#include <iostream>
using namespace std;
bool checkPrime(int iNo)
{
    int iFlag=0;

    for(int i=2;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            iFlag=1;
            break;
        }
    }
    if(iFlag==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void checkPrimeInRange(int iStart, int iEnd)
{
    for(int i=iStart;i<=iEnd;i++)
    {
        if(checkPrime(i))
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

    checkPrimeInRange(iStart, iEnd);

    return 0;
}