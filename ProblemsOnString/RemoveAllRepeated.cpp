/*
Input:
Enter the String
KunalKunal
Output:
Before Remove repeated string is KunalKunal
After Remove repeated string is Kunal
*/
#include<iostream>
#include<string.h>
#define MAX 100
using namespace std;
void RemoveAllRepeated(char Str[])
{
    int len=strlen(Str);
    int k=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(Str[i]==Str[j])
            {
                k=j;
                while(k<len)
                {
                    Str[k]=Str[k+1];
                    k++;
                }
                len--;
            }
        }
    }
}
int main()
{
    char Str[MAX];
    cout<<"Enter the String\n";
    cin.getline(Str,MAX);
    cout<<"Before Remove repeated string is "<<Str<<endl;
    RemoveAllRepeated(Str);
    cout<<"After Remove repeated string is "<<Str<<endl;
    return 0;
}