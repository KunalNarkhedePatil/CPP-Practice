#include<iostream>
using namespace std;
void FreqOfEachDigit(int iNo)
{
    int n=0,iDigit=0,lastDigit=0;
    int Freq[10];

    for(int i=0;i<10;i++)
    {
        Freq[i]=0;
    }

    n=iNo;

    while(n!=0)
    {
        lastDigit=n%10;
        n=n/10;
        Freq[lastDigit]++;
    }

    cout<<"Frequency of each digit\n";

    for(int i=0;i<10;i++)
    {
        cout<<"Frequency of "<<i<<"="<<Freq[i]<<endl;
    }


}
int main()
{
    int iNo=0;

    cout<<"Enter the number\n";
    cin>>iNo;

    FreqOfEachDigit(iNo);
    return 0;
}