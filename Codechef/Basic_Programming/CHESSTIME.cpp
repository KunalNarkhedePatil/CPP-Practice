#include <iostream>
using namespace std;

int main() {
	int t=0,N=0;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>N;
	    N=N*60;
	    int iAns=N/20;
	    cout<<iAns<<endl;
	}
	return 0;
}
