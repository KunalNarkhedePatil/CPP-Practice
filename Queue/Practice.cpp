#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int iNo=0;
    cout<<"enter the number\n";
    cin>>iNo;
    int num=1;
   
    for(int i=1;i<=iNo;i++)
    {
        if(i==1)
        {
            num=num*10;
            v.push_back(num);
        }
        else if(i%2==1)
        {
            num=(num*10)+1;
            v.push_back(num);
        }
        else
        {
            num=num*10;
            v.push_back(num);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}