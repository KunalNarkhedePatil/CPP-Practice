#include <iostream>
using namespace std;

int main() {
	int t=0;
	
	int X1=0,X2=0,Y1=0,Y2=0;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>X1>>Y1>>X2>>Y2;
	    
	    if(X1+Y1<=X2+Y2)
	    {
	        cout<<X1+Y1<<endl;
	    }
	    else
	    {
	        cout<<X2+Y2<<endl;
	    }
	}
	return 0;
}
