#include <iostream>
using namespace std;

int main() {
	int t=0;
	int X=0,P=0,Q=0;
	cin>>t;
	
	while(t--)
	{
	    cin>>X>>P>>Q;
	    
	    int Ans=P-Q;
	    cout<<Ans*X<<endl;
	}
	return 0;
}
