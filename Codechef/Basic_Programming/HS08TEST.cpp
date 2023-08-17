// ATM

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int X=0;
    float Y=0;
    
    cin>>X>>Y;
     float fans=Y-X-0.50;
    if(X%5==0 && fans>=0)
    {
       
        
        cout<<fixed<<setprecision(2)<<fans<<endl;
    }
    else 
    {
        cout<<fixed<<setprecision(2)<<Y<<endl;
    }
    return 0;
}