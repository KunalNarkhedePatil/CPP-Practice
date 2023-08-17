#include <iostream>
using namespace std;

int main() {
	int t=0;
	int X=0,Y=0;
	cin>>t;
	
	while(t--)
	{
	    cin>>X>>Y;
	    
	    if(X<Y)
	    {
	        cout<<"REPAIR"<<endl;
	    }
	    else if(X>Y)
	    {
	        cout<<"NEW PHONE"<<endl;
	    }
	    else
	    {
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}
