#include <iostream>
using namespace std;
int SumofAllNaturalNo(int iNo)
{
    int iSum = 0;
    for (int i = 1; i <= iNo; i++)
    {
        iSum = iSum + i;
    }
    return iSum;
}
int main()
{
    int iNo = 0, iRet = 0;

    cout << "Enter the number\n";
    cin >> iNo;

    iRet = SumofAllNaturalNo(iNo);

    cout << "Sum of all natural number is " << iRet << endl;

    return 0;
}