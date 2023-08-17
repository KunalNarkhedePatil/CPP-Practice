#include <iostream>
using namespace std;

int main() {
	int t=0;
	int X=0,Y=0;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>X>>Y;
	    
	   
	    int idouble=X*3;
	    int itriple=Y*2;
	    
	    
	    
	    if(idouble<=itriple)
	    {
	        cout<<idouble<<endl;
	    }
	    else
	    {
	        cout<<itriple<<endl;
	    }
	}
	return 0;
}
