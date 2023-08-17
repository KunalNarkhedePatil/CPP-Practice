#include <iostream>
using namespace std;

int main() {
    int t=0;
    int X=0,Y=0;
    cin>>t;
    
    while(t--){
        cin>>X>>Y;
        
        if(X*2>Y*5)
        {
            cout<<"Chocolate"<<endl;
        }
        else if(X*2==Y*5)
        {
            cout<<"Either"<<endl;
        }
        else
        {
            cout<<"Candy"<<endl;
        }
    }
	return 0;
}
