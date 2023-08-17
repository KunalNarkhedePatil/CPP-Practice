#include <iostream>
using namespace std;
int FindFactorial(int iNo)
{
    int iMult = 1;

    for (int i = 1; i <= iNo; i++)
    {
        iMult = iMult * i;
    }
    return iMult;
}
int main()
{

    int iNo = 0, iRet = 0;

    cout << "Enter the number\n";
    cin >> iNo;

    iRet = FindFactorial(iNo);

    cout << "Factorial of " << iNo << " is " << iRet << endl;

    return 0;
}