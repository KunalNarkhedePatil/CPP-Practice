#include<iostream>
using namespace std;
class Demo
{
   public:
   int iNo1,iNo2;
   Demo(int iValue1,int iValue2)
   {
      this->iNo1=iValue1;
      this->iNo2=iValue2;
   }
   int Addition()
   {
      int iNo3=0;
      iNo3=iNo1+iNo2;
   }
};
int main()
{
    int iNo1=0,iNo2=0,iRet=0;
    cout<<"Enter the first number\n";
    cin>>iNo1;
    cout<<"Enter the second number\n";
    cin>>iNo2;
    Demo *dobj=new Demo(iNo1,iNo2);

    iRet=dobj->Addition();
    cout<<"Addition of two number is "<<iRet<<endl;
    return 0;
}