#include <iostream>
using namespace std;

int main() {
	int t=0;
	int K=0,X=0;
    cin>>t;
    
    while(t--)
    {
       cin>>K>>X;
       
       cout<<(K*7)-X<<endl;
    }
	return 0;
}
