#include <iostream>
using namespace std;

int main()
{
    
    int t=0;
    int X=0,Y=0;
    
    
    cin>>t;
    
    while(t--)
    {
        cin>>X>>Y;
        
        if((X>0 && Y>0 )&& X==Y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}