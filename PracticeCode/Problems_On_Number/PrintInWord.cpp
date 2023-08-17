#include <iostream>
using namespace std;
void PrintInWord(int iNo)
{
    int iDigit = 0,iRev=0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
    iNo=iRev;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        switch (iDigit)
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
        iNo=iNo/10;
    }
}
int main()
{
    int iNo = 0;

    cout << "Enter the number\n";
    cin >> iNo;

    PrintInWord(iNo);

    return 0;
}