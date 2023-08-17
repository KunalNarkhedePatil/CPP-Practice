#include <iostream>
using namespace std;

int main() {
   int t=0;
   int Sec1=0,Sec2=0,Sec3=0;
   
   
   cin>>t;
   
   while(t--)
   {
       cin>>Sec1>>Sec2>>Sec3;
       
       int Total=Sec1+Sec2+Sec3;
       
       if(Total>=100 && Sec1>=10 && Sec2>=10&& Sec3>=10)
       {
           cout<<"PASS"<<endl;
       }
       else
       {
           cout<<"FAIL"<<endl;
       }
   }
	return 0;
}
