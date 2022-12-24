#include <iostream>
using namespace std;

class Stack
{
private:
    int Top;
    int iSize;
    int *Arr;

public:
    Stack();
    int isEmpty();
    int isFull();
    void Push(char ch);
    void Pop();
    bool ParentheisisMatching(char Exp[]);
};
Stack::Stack()
{
    Top = -1;
    iSize = 10;
    Arr = (int *)malloc(sizeof(int) * iSize);
}
int Stack::isEmpty()
{
    if (Top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Stack::isFull()
{
    if (Top == iSize - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Stack::Push(char ch)
{
    if (isFull())
    {
        cout << "Stack is full\n";
        return;
    }
    else
    {
        Top++;
        Arr[Top] = ch;
    }
}
void Stack::Pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty\n";
    }
    else
    {

        Top--;
    }
}
bool Stack::ParentheisisMatching(char Exp[])
{
    int i = 0;
    while (Exp[i] != '\0')
    {
        if (Exp[i] == '(')
        {
            Push(Exp[i]);
        }
        else if (Exp[i] == ')')
        {
            if (isEmpty())
            {
                return false;
            }
            Pop();
        }
        i++;
    }
    if (isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char exp[20];
    Stack *sobj = new Stack();

    cout << "Enter the Expression\n";
    gets(exp);

    if (sobj->ParentheisisMatching(exp))
    {
        cout << "Parenthesis are match\n";
    }
    else
    {
        cout << "Parenthsis are not match\n";
    }
    return 0;
}