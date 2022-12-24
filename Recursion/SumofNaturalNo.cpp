#include<iostream>
using namespace std;
void Display(int i,int n,int *sum)
{
    if(i==n)
    {
        *sum=*sum+i;
        return;
    }
    *sum=*sum+i;
    Display(i+1,n,sum);
}
int main()
{
    int sum=0;
    int i=1;

    Display(i,5,&sum);

    cout<<"Sum of natural no is "<<sum<<endl;
    return 0;
}