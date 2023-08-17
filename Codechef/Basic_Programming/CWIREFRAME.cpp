#include <iostream>
using namespace std;

int main() {
	int t=0;
	
	int N=0,M=0,X=0;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>N>>M>>X;
	    
	    cout<<((N*2)+(M*2))*X<<endl;
	}
	return 0;
}
