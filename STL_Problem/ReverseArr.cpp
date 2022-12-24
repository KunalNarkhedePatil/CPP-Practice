#include<iostream>
#include<vector>
using namespace std;
void Swap(int *p1,int *p2)
{
    int Temp=*p1;
    *p1=*p2;
    *p2=Temp;
}
vector<int> ReverseArr(vector<int> &v,int size)
{
   int s=0;
   int e=v.size()-1;

   while(s<=e)
   {
      Swap(&v[s],&v[e]);
      s++;
      e--;
   }
   return v;
}
void printArr(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int> ans=ReverseArr(v,v.size());

    printArr(ans);
   
    return 0;
}