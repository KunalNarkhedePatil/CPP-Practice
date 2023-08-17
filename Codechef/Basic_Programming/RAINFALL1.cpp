#include <iostream>
using namespace std;

int main() {
	int t=0;
	int X=0;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>X;
	    
	    if(X<3)
	    {
	        cout<<"LIGHT"<<endl;
	    }
	    else if(X>=7)
	    {
	        cout<<"HEAVY"<<endl;
	    }
	    else
	    {
	        cout<<"MODERATE"<<endl;
	    }

	}
	return 0;
}
