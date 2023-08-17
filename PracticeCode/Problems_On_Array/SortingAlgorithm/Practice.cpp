#include<iostream>
using namespace std;

int main()
{
    int t=0;
    int a=0,b=0,c=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;

        if((a>b&&a<c)||(a<b&&a>c))
        {
            cout<<a<<endl;
        }
        else if((b>a&&b<c)||(b<a&&b>c))
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
}