#include<iostream>

using namespace std;

int main()
{
    int Arr[10]={1,2,3,4,5,6,6,7,8,9};

    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            for(int k=j+1;k<10;k++)
            {
                if(Arr[i]+Arr[j]+Arr[k]==10)
                {
                    cout<<Arr[i]<<" "<<Arr[j]<<" "<<Arr[k]Fi<<" ";
                     cout<<endl;
                }
            }
           
        }
    }
    return 0;
}