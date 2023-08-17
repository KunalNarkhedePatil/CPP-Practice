#include <iostream>
using namespace std;

int main() {
	int t=0;
	int X=0;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>X;
	    
	    if(X>9)
	    {
	        int ans=X-((X/10)*10);
	        cout<<ans<<endl;
	    }
	    else
	    {
	        cout<<X<<endl;
	    }
	}
	return 0;
}
