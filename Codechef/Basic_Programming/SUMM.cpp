#include <iostream>
using namespace std;

int main() {
	int t=0;
	int A=0,B=0,C=0;
	cin>>t;
	
	while(t--)
	{
	    cin>>A>>B>>C;
	    
	    if(A+B==C)
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
