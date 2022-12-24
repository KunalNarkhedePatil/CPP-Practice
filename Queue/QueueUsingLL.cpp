#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    class Node *next;
};
typedef class Node NODE;
typedef class Node *PNODE;

class QueueLL
{
private:
    PNODE Front;
    PNODE Rare;

    int size;

public:
    QueueLL();
    void EnQueue(int iNo);
    void DeQueue();
    int Count();
    void Display();
};
QueueLL::QueueLL()
{
    Front = NULL;
    Rare = NULL;
    size = 0;
}
int QueueLL::Count()
{
    return size;
}
void QueueLL::Display()
{
    PNODE Temp = Front;

    do
    {
        cout << "|" << Temp->data << "|->";
        Temp = Temp->next;
    } while (Temp != Rare->next);
    cout << "NULL\n";
}
void QueueLL::EnQueue(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    if (Front == NULL && Rare == NULL)
    {
        Front = newn;
        Rare = newn;
    }
    else
    {
        Rare->next = newn;
        Rare = newn;
    }
    Rare->next = Front;
    size++;
}
void QueueLL::DeQueue()
{
    if (Front == NULL && Rare == NULL)
    {
        return;
    }
    else if (Front == Rare)
    {
        delete Front;
        delete Rare;
        Front = NULL;
        Rare = NULL;
    }
    else
    {
        PNODE temp = Front;
        Front = Front->next;
        delete temp;
    }
    size--;
}
int main()
{
    QueueLL *qobj = new QueueLL();
    qobj->EnQueue(10);
    qobj->EnQueue(20);
    qobj->EnQueue(30);
    qobj->EnQueue(40);
    qobj->EnQueue(50);
    qobj->DeQueue();
    cout << "Size of queue is " << qobj->Count() << endl;
    qobj->Display();

    return 0;
}