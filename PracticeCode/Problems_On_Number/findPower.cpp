#include <iostream>
using namespace std;
int findPower(int iBase, int iExponent)
{
    int iPow = 1;
    for (int i = 1; i <= iExponent; i++)
    {
        iPow = iPow * iBase;
    }
    return iPow;
}
int main()
{
    int iBase = 0, iExponent = 0, iRet = 0;

    cout << "Enter the base\n";
    cin >> iBase;

    cout << "Enter the Exponent\n";
    cin >> iExponent;

    iRet = findPower(iBase, iExponent);

    cout << iBase << " ^ " << iExponent << " = " << iRet << endl;

    return 0;
}