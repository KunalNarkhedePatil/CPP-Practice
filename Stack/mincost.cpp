// min cost to make string valid
#include <string.h>
#include <iostream>
#include <stack>

using namespace std;
int mincost(char str[])
{
    stack<char> s;

    int n = strlen(str);
    if (n % 2 == 1)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        char ch = str[i];

        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    int a = 0, b = 0;

    while (!s.empty())
    {
        if (s.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        s.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}
int main()
{
    char str[20];
    cout << "Enter the string\n";
    cin.getline(str, 20);

    cout << "min cost to make string is " << mincost(str);
    return 0;
}