#include <iostream>
using namespace std;

int main() {
    int t=0;
    int X=0,Y=0,Z=0;
    
    cin>>t;
    
    while(t--)
    {
        cin>>X>>Y>>Z;
        
        if(X>Y && X>Z)
        {
            cout<<"SETTER"<<endl;
        }
        else if(Y>X && Y>Z)
        {
            cout<<"TESTER"<<endl;
        }
        else
        {
            cout<<"EDITORIALIST"<<endl;
        }
    }
	return 0;
}
