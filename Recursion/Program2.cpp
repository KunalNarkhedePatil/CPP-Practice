//print 1 to 5
#include<iostream>
using namespace std;
void Display(int n)
{
    if(n==0)
    {
        return; 
    }
    Display(n-1);
    cout<<n<<endl;
    
}
int main()
{
    Display(5);
    return 0;
}