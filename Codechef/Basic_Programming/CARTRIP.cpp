#include <iostream>
using namespace std;

int main() {
	int t=0;
	int X=0;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>X;
	    
	    if(X<=300)
	    {
	        cout<<"3000"<<endl;
	    }
	    else
	    {
	        cout<<X*10<<endl;
	    }
	}
	return 0;
}
