//print 5 to 1

#include<iostream>
using namespace std;
void Display(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    Display(n-1);
}
int main()
{
    Display(5);
    return 0;
}