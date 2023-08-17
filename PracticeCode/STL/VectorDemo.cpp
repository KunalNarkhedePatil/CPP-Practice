#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v2(5, 1); // here the 5 is size of vector and 1 is all the element in
    // vector are initialize with the 1

    vector<int> last(v2); // copy the v2 vector in the last

    cout << "Traverse the vector\n";

    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    kunalkunal kunal kunal kunal kunalkinal kunal kinal kunaql
    cout << "Capacity->" << v.capacity() << endl;
    v.push_back(10);
    cout << "Capacity->" << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity->" << v.capacity() << endl;
    v.push_back(4);
    cout << "Capacity->" << v.capacity() << endl;
    v.push_back(5);
    cout << "Capacity->" << v.capacity() << endl;
    v.push_back(50);
    cout << "Capacity->" << v.capacity() << endl;
    cout << "Size->" << v.size() << endl;

    cout << "first element ->" << v.front() << endl;
    cout << "last element ->" << v.back() << endl;
    cout << "2nd element ->" << v.at(0) << endl;
    cout << "3rd element ->" << v[0] << endl;

    v.pop_back();
    cout << "last element ->" << v.back() << endl;
    cout << "Traverse the vector\n";
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << "Max size of vector " << v.max_size() << endl;

    //v.clear();
    v.insert(v.begin()+1,20);
    for (int i : v)
    {
        cout << i << endl;
    }

    cout<<"Size of vector"<<v.size()<<endl;
    cout<<"Capacity of vector "<<v.capacity()<<endl;

    return 0;
}