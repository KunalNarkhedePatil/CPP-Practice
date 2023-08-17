#include <iostream>
using namespace std;

int main() {
	int t=0;
	int X=0,Y=0;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>X>>Y;
	    
	    int M=Y-X;
	    if(X>Y)
	    {
	        cout<<Y<<endl;
	    }
	    else{
	    cout<<X+M*2<<endl;
	    }
	}
	return 0;
}
