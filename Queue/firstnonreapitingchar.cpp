#include <iostream>
#include <queue>
#include <map>
#include <string.h>
using namespace std;

int main()
{
    char str[10] = "aabc";
    queue<char> q;
    map<char, int> count;
    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        char ch = str[i];

        count[ch]++;
        q.push(ch);

        while (!q.empty())
        {
            if (count[q.front()] > 1)
            {
                q.pop();
            }
            else
            {
                cout << q.front() << " ";
                break;
            }
        }
        if (q.empty())
        {
            cout << "#"
                 << " ";
        }
    }

    return 0;
}