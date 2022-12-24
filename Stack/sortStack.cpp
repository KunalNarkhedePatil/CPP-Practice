#include <iostream>
#include <stack>
using namespace std;
void insertsorted(stack<int> &s, int ino)
{
    if (s.empty() || ((!s.empty()) && (s.top() < ino)))
    {
        s.push(ino);
        return;
    }
    int x = s.top();
    s.pop();

    insertsorted(s, ino);
    s.push(x);
}
void sortStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int x = s.top();
    s.pop();

    sortStack(s);
    insertsorted(s, x);
}
int main()
{
    stack<int> s;

    s.push(10);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    sortStack(s);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}