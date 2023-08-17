#include <iostream>
using namespace std;

int main() {
    int t=0;
    int X=0;
    cin>>t;
    
    while(t--)
    {
        cin>>X;
        
        if(X<=70)
        {
            cout<<"0"<<endl;
        }
        else if(X>100)
        {
            cout<<"2000"<<endl;
        }
        else
        {
            cout<<"500"<<endl;
        }
    }
	return 0;
}
