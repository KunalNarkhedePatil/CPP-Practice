#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(30);
    d.push_back(40);
    d.push_back(50);
    d.push_front(10);
    d.push_front(20);


    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_front();
    d.pop_back();
    cout<<"After the pop operation\n";
    for(int i:d)
    {
        cout<<i<<" ";
    }

    cout<<"Front element ->"<<d.front()<<endl;
    cout<<"Last element ->"<<d.back()<<endl;
    cout<<"emepty or not"<<d.empty()<<endl;
    cout<<"1st element ->"<<d.at(1)<<endl;






    
    return 0;
}