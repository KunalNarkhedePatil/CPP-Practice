#include <iostream>
using namespace std;

int main() {
	int t=0;
	int N=0,X=0,Y=0;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>N>>X>>Y;
	    
	    if(X*Y>=N)
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
