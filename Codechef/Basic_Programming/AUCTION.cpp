#include <iostream>
using namespace std;

int main() {
	int t=0;
	int A=0,B=0,C=0;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>A>>B>>C;
	    if(A>B && A>C)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(B>A && B>C)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Charlie"<<endl;
	    }
	}
	return 0;
}
