#include <iostream>
#include <stack>
#include<queue>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
typedef class node NODE;
typedef class node *PNODE;
class SinglyLinear
{
public:
    PNODE first;
    int size;

public:
    SinglyLinear();
    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
    void SearchFirstOcc(int iNo);
    void SearchLastOcc(int iNo);
    int LargestElement();
    int SmallestElement();
    int SumofAll();
    void DisplayAllPerfect();
    int CheckPerfect(int iNo);
    void DisplayAllPrime();
    int CheckPrime(int iNo);
    void AdditionofEvenandOdd();
    void DisplayAdditionOfDigit();
    int AdditionOfDigit(int iNo);
    void DisplayReverseDigit();
    int ReverseDigit(int iNo);
    void DiplayPalindromicDigit();
    int CheckPalindrome(int iNo);
    void ProductDigit();
    int GetNthElement(int pos);
    void MoveLastToFront();
    void CheckLLPalindromic();
    int MiddleElement();
    void RemoveDuplicates();
    void RevrseLLRecursion(PNODE first);
    void OtherSolRevLL();
    void DeleteNthNodeFromLast(int no);
    int GetNthNodeFromLast(int no);
    void Sort0and1and2();
    void Display();
    void Demo(int iNo);
    int Count();
};
SinglyLinear::SinglyLinear()
{
    first = NULL;
    size = 0;
}
void SinglyLinear::Display()
{
    PNODE temp = first;

    while (temp != NULL)
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    }
    printf("NULL\n");
}
int SinglyLinear::Count()
{
    return size;
}
void SinglyLinear::InsertFirst(int iNo)
{
    PNODE newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    size++;
}
void SinglyLinear::InsertLast(int iNo)
{
    PNODE newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        PNODE temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    size++;
}
void SinglyLinear::InsertAtPos(int iNo, int iPos)
{
    if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == size + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = new NODE;
        newn->data = iNo;
        newn->next = NULL;

        PNODE temp = first;
        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        size++;
    }
}
void SinglyLinear::DeleteFirst()
{
    if (first == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = first;
        first = first->next;
        delete temp;
    }
    size--;
}
void SinglyLinear::DeleteLast()
{
    if (first == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        PNODE temp = first;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    size--;
}
void SinglyLinear::DeleteAtPos(int iPos)
{
    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == size)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = first;

        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        PNODE targated = temp->next;
        temp->next = targated->next;
        free(targated);
        size--;
    }
}
void SinglyLinear::SearchFirstOcc(int iNo)
{
    int index = 0;
    PNODE temp = first;

    while (temp != NULL)
    {
        index++;
        if (temp->data == iNo)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp != NULL)
    {
        cout << "Number is present at " << index << " index" << endl;
    }
    else
    {
        cout << "Number is not found" << endl;
    }
}
void SinglyLinear::SearchLastOcc(int iNo)
{
    int index = 0;
    PNODE temp = first;
    int flag = -1;

    while (temp != NULL)
    {
        index++;
        if (temp->data == iNo)
        {
            flag = index;
        }
        temp = temp->next;
    }
    if (flag == -1)
    {
        cout << "Number is not found\n";
    }
    else
    {
        cout << "last occ of number is found at " << flag << " index" << endl;
    }
}
int SinglyLinear::SumofAll()
{
    PNODE temp = first;
    int sum = 0;
    while (temp != NULL)
    {
        sum = sum + temp->data;
        temp = temp->next;
    }
    return sum;
}
int SinglyLinear::LargestElement()
{
    PNODE temp = first;
    int max = temp->data;
    while (temp != NULL)
    {
        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    return max;
}
int SinglyLinear::SmallestElement()
{
    PNODE temp = first;
    int min = temp->data;

    while (temp != NULL)
    {
        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    return min;
}
int SinglyLinear::CheckPerfect(int iNo)
{
    int sum = 0;
    for (int i = 1; i <= iNo / 2; i++)
    {
        if (iNo % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == iNo)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void SinglyLinear::DisplayAllPerfect()
{
    PNODE temp = first;
    while (temp != NULL)
    {
        if (CheckPerfect(temp->data))
        {
            cout << temp->data << " ";
        }
        temp = temp->next;
    }
}
int SinglyLinear::CheckPrime(int iNo)
{
    int i = 0;
    int flag = 0;
    for (i = 2; i <= iNo / 2; i++)
    {
        if (iNo % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void SinglyLinear::DisplayAllPrime()
{
    PNODE temp = first;
    if (this->first == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }
    else
    {

        while (temp != NULL)
        {
            if (CheckPrime(temp->data))
            {
                cout << temp->data << " ";
            }
            temp = temp->next;
        }
    }
}
void SinglyLinear::AdditionofEvenandOdd()
{
    PNODE temp = this->first;
    int sumEven = 0;
    int sumOdd = 0;
    if (this->first == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }
    else
    {

        while (temp != NULL)
        {
            if (temp->data % 2 == 0)
            {
                sumEven = sumEven + temp->data;
            }
            else
            {
                sumOdd = sumOdd + temp->data;
            }
            temp = temp->next;
        }
        cout << "Addition of even element in LL are " << sumEven << endl;
        cout << "Addition of odd element in LL are " << sumOdd << endl;
    }
}
int SinglyLinear::AdditionOfDigit(int iNo)
{
    int sum = 0;

    while (iNo != 0)
    {
        int iDigit = iNo % 10;
        sum = sum + iDigit;
        iNo = iNo / 10;
    }
    return sum;
}
void SinglyLinear::DisplayAdditionOfDigit()
{
    PNODE temp = this->first;

    while (temp != NULL)
    {
        cout << AdditionOfDigit(temp->data) << " ";
        temp = temp->next;
    }
}
int SinglyLinear::ReverseDigit(int iNo)
{
    int iRev = 0;
    while (iNo != 0)
    {
        int iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}
void SinglyLinear::DisplayReverseDigit()
{
    PNODE temp = this->first;

    while (temp != NULL)
    {
        cout << ReverseDigit(temp->data) << " ";
        temp = temp->next;
    }
}
int SinglyLinear::CheckPalindrome(int iNo)
{
    int Temp = iNo;
    int iRev = 0;
    while (Temp != 0)
    {
        int iDigit = Temp % 10;
        iRev = iRev * 10 + iDigit;
        Temp = Temp / 10;
    }
    if (iRev == iNo)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void SinglyLinear::DiplayPalindromicDigit()
{
    PNODE temp = this->first;

    while (temp != NULL)
    {
        if (CheckPalindrome(temp->data))
        {
            cout << temp->data << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}
void SinglyLinear::ProductDigit()
{
    PNODE temp = this->first;

    while (temp != NULL)
    {
        int Product = 1;
        int iNo = temp->data;
        while (iNo != 0)
        {
            int iDigit = iNo % 10;
            Product = Product * iDigit;
            iNo = iNo / 10;
        }
        cout << Product << " ";
        temp = temp->next;
    }
    cout << endl;
}
int SinglyLinear::GetNthElement(int pos)
{
    PNODE temp = this->first;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    return temp->data;
}
void SinglyLinear::MoveLastToFront()
{
    PNODE temp = this->first;
    PNODE temp1 = NULL;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp1 = temp->next;
    int iNo = temp1->data;
    delete temp->next;
    temp->next = NULL;
    InsertFirst(iNo);
}
void SinglyLinear::CheckLLPalindromic()
{
    int Pos = this->size;
    PNODE temp = this->first;
    int start = 1;
    int flag = 1;
    while (temp != NULL)
    {
        int iNo = GetNthElement(Pos);

        if (start < Pos)
        {
            if (temp->data != iNo)
            {
                flag = 0;
                break;
            }
            else
            {
                start++;
                Pos--;
                temp = temp->next;
            }
        }
        else
        {
            break;
        }
    }
    if (flag == 1)
    {
        cout << "LL is palindromic\n";
    }
    else
    {
        cout << "LL is not palindromic\n";
    }
}
int SinglyLinear::MiddleElement()
{
    return GetNthElement((this->size / 2) + 1);
}

void SinglyLinear::RemoveDuplicates()
{
   PNODE temp=this->first;

   int index=1;
   int index1=0;
   while(temp!=NULL)
   {
     index1=index+1;
     PNODE temp1=temp->next;
     while(temp1!=NULL)
     {
        
        if(temp->data==temp1->data)
        { 
           temp1=temp1->next;
           DeleteAtPos(index1);
           continue;
        }
        temp1=temp1->next;
        index1++;
           
     }
     temp=temp->next;
     index++;
   }
}
void SinglyLinear::RevrseLLRecursion(PNODE first)
{
    if(first==NULL)
    {
        return;
    }
    RevrseLLRecursion(first->next);
    cout<<first->data<<"->";
}
void SinglyLinear::OtherSolRevLL()
{
    if(this->first==NULL || this->first->next==NULL)
    {
        return;
    }
    PNODE temp = this->first;

    PNODE prevNode = this->first;
    PNODE currNode = this->first->next;

    while (currNode != NULL)
    {
        PNODE nextNode = currNode->next;

        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    this->first->next = NULL;
    this->first = prevNode;
}
void SinglyLinear::DeleteNthNodeFromLast(int iNo)
{
    int Pos = this->size - iNo + 1;

    DeleteAtPos(Pos);
}
int SinglyLinear::GetNthNodeFromLast(int iNo)
{
    int Pos=this->size-iNo+1;

    return GetNthElement(Pos);

}
void SinglyLinear::Demo(int iNo)
{
    PNODE temp=this->first;
    int count=1;
    while(temp!=NULL)
    {
        if(temp->data==iNo)    
        {
            break;
        }
        temp=temp->next;
        count++;
    }
    DeleteAtPos(count);
}
void SinglyLinear::Sort0and1and2()
{
    PNODE temp=this->first;
    queue<int> q1,q2,q3;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
           q1.push(temp->data);
        }
        else if(temp->data==1)
        {
           q2.push(temp->data);
        }
        else if(temp->data==2)
        {
            q3.push(temp->data);
        }
        temp=temp->next;
    }
    while(!q2.empty())
    {
        int front=q2.front();
        q2.pop();
        q1.push(front);
    }
    while(!q3.empty())
    {
        int front=q3.front();
        q3.pop();
        q1.push(front);
    }
    this->first=NULL;
    while(!q1.empty())
    {
        int front=q1.front();
        InsertLast(front);
        q1.pop();
    }
}
int main()
{
    SinglyLinear *sobj = new SinglyLinear();
    sobj->InsertFirst(0);
    sobj->InsertFirst(1);
    sobj->InsertFirst(2);
    sobj->InsertFirst(0);
    sobj->InsertFirst(1);
    // sobj->InsertLast(100);
    // sobj->InsertAtPos(25, 3);

    /*sobj->DeleteFirst();
    sobj->DeleteLast();
    sobj->DeleteAtPos(2);


   sobj->SearchFirstOcc(31);
   sobj->SearchLastOcc(31);

    cout<<"Sum of all the element in the linked list are "<<sobj->SumofAll()<<endl;
    cout<<"Largest element in the LL  are "<< sobj->LargestElement()<<endl;
    cout<<"smallest element in the LL  are "<< sobj->SmallestElement()<<endl;

    sobj->DisplayAllPerfect();
    cout<<endl;

    sobj->DisplayAllPrime();
    cout<<endl;
    sobj->AdditionofEvenandOdd();

    sobj->DisplayAdditionOfDigit();
    cout<<endl;

    sobj->DisplayReverseDigit();
    cout<<endl;

    sobj->DiplayPalindromicDigit();
    sobj->ProductDigit();
    cout<<"Nth element is "<<sobj->GetNthElement(3)<<endl;


   sobj->MoveLastToFront();

   sobj->CheckLLPalindromic();

   cout<<"Middile element in our LL is "<<sobj->MiddleElement()<<endl;
   */
    //sobj->RemoveDuplicates();

    // sobj->RevrseLL();

   // sobj->RevrseLLRecursion(sobj->first);
   // cout<<"NULL";
    //cout<<endl;

    //sobj->DeleteNthNodeFromLast(2);
    //cout<<sobj->GetNthNodeFromLast(2)<<endl;
    //sobj->Demo(3);
    sobj->Sort0and1and2();
    sobj->Display();

    cout << "Number of node in the linked list are " << sobj->Count() << endl;
}