#include <iostream>
using namespace std;

int main() {
    int t=0,N=0,K=0;
    
    cin>>t;
    
    while(t--)
    {
        cin>>N>>K;
        
        if(K>N)
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
