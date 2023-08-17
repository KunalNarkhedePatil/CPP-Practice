#include <iostream>
using namespace std;

int main() {
	int t=0;
	int A=0,B=0;
	cin>>t;
	
	while(t--)
	{
	    cin>>A>>B;
	    
	    if((A+B)%2==0)
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
