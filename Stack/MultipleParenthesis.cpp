#include <iostream>
using namespace std;
class Stack
{
private:
    int Top;
    int iSize;
    int *Arr;

public:
    Stack(int iNo);
    void Push(char ch);
    char Pop();
    int isMatch(char a,char b);
    int isEmpty();
    int isFull();
    bool MultipleParenthesis(char Exp[]);
};
Stack::Stack(int iNo = 20)
{
    Top = -1;
    iSize = iNo;
    Arr = new int[iSize];
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
int Stack::isMatch(char a,char b)
{
    if((a=='(' && b==')')||(a=='[' && b==']')||a=='{' && b=='}')
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
        cout << "Stack is Full\n";
    }
    else
    {
        Top++;
        Arr[Top] = ch;
    }
}
char Stack::Pop()
{
    if (isEmpty())
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        char ch = Arr[Top];
        Top--;
        return ch;
    }
}
bool Stack::MultipleParenthesis(char Exp[])
{
    int i = 0;
    while (Exp[i] != '\0')
    {
        if (Exp[i] == '(' || Exp[i] == '[' || Exp[i] == '{')
        {
            Push(Exp[i]);
        }
        else if (Exp[i] == ')' || Exp[i] == ']' || Exp[i] == '}')
        {
            if (isEmpty())
            {
                return false;
            }
            char ch = Pop();
            if (!isMatch(ch, Exp[i]))
            {
                return false;
            }
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
    Stack *sobj = new Stack(20);
    char Exp[20];
    cout << "Enter the Expression\n";
    cin.getline(Exp, 20);

    if (sobj->MultipleParenthesis(Exp))
    {
        cout << "Parentheisis are match\n";
    }
    else
    {
        cout << "Parenthesis are not match\n";
    }

    return 0;
}