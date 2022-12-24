#include <iostream>
using namespace std;

int main()
{
    int n = 1330;
    int iNo = 0;
    int isum = 0;
    while (n != 0)
    {

        switch (1)
        {
        case 1:
            if (n >= 100)
            {

                iNo = n / 100;
                n = n % 100;
                break;
            }
        case 2:
            if (n >= 50)
            {

                iNo = n / 50;
                n = n % 50;
                break;
            }

        case 3:
            if (n >= 20)
            {

                iNo = n / 20;
                n = n % 20;
                break;
            }

        case 4:
            if (n <= 19)
            {

                iNo = n / 1;
                n = 0;
                break;
            }
           
        }

        isum = isum + iNo;
    }
    cout<<isum<<endl;
    return 0;
}