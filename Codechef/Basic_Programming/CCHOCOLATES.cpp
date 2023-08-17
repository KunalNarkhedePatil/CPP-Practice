#include <iostream>
using namespace std;

int main() {
int t=0;

int X=0,Y=0,Z=0;

cin>>t;

  while(t--)  
  {
      cin>>X>>Y>>Z;
      
      int M=X*5+Y*10;
      
      cout<<M/Z<<endl;
  }
	return 0;
}
