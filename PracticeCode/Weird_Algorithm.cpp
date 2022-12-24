#include<iostream>

using namespace std;
void Display(int iNo)
{
    if(iNo==1)
    {
        return;
    }
    if(iNo%2==1)
    {
        cout<<iNo<<"->";
        iNo=(iNo*3)+1;
    }
    else
    {
        cout<<iNo<<"->";
        iNo=iNo/2;
    }
    Display(iNo);
}
int main()
{
    int iNo=0;

    cout<<"Enter the number\n";
    cin>>iNo;
    cout<<iNo<<"->";
    Display(iNo);
    return 0;
}