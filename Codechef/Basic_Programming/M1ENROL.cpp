#include <iostream>
using namespace std;

int main() {
	int t=0;
	int X=0,Y=0;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>X>>Y;
	    
	    int ans=Y-X;
	    
	    if(ans<0)
	    {
	        cout<<"0"<<endl;
	    }else
	    {
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
