#include <iostream>
using namespace std;

int main() {
    int t=0;
    int X=0,Y=0;
    
    cin>>t;
    
    while(t--)
    {
        cin>>X>>Y;
        int A=X*100;
        int B=Y*10;
        
        
        if(A>=B)
        {
            cout<<"CLOTH"<<endl;
        }
        else
        {
            cout<<"DISPOSABLE"<<endl;
        }
    }
	return 0;
}
