#include<iostream>
using namespace std;
void Display(int i,int n,int *sum)
{
    if(i==n+1)
    {
        return;
    }
    Display(i+1,n,sum);
    *sum=*sum+i;
}
int main()
{
    int sum=0;
    Display(1,5,&sum);
    cout<<"Result:"<<sum;
    return 0;
}