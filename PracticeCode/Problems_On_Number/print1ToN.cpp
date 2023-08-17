#include<iostream>
using namespace std;
void print1ToN(int iNo)
{
   int i=1;
   while(i<=iNo)
   {
      cout<<i<<" ";
      i++;
   }
}
int main()
{
    int iNo=0;
    cout<<"Enter the number\n";
    cin>>iNo;

    print1ToN(iNo);
    return 0;
}