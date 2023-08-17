// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<bits/stdc++.h>

using namespace std;

int findSumOfFirstAndLastDigit(int iNo)
{
    int last=iNo%10;
    
    while(iNo>9)
    {
        iNo=iNo/10;
    }
    return iNo+last;
}
int main()
{
    
    int t=0;
    int N=0;
    cin>>t;
    
    while(t--)
    {
        cin>>N;
        
        cout<<findSumOfFirstAndLastDigit(N)<<endl;
    }
return 0;

}