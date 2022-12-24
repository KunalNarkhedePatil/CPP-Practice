#include<iostream>

using namespace std;

void Fobonacci(int a,int b,int n)
{
   if(n==0)
   {
      return;
   }
   int c=a+b;
   cout<<c<<" ";
   Fobonacci(b,c,n-1);

}
int main()
{
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    Fobonacci(a,b,7-2);
    return 0;
}