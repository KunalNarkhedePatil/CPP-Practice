/*
----------Post Order Travarsal-----------
--------------------------------------------
Input:1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1 
---------------------------------------------
OutPut:4 5 2 6 7 3 1
---------------------------------------------
*/
#include <iostream>
#include <queue>
using namespace std;
template <typename T>
class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
typedef BinaryTreeNode<int> *PBTNODE;
typedef BinaryTreeNode<int> BTNODE;
PBTNODE TakeInputLevelWise()
{
    int rootData;
    cout << "Enter the rootData\n";
    cin >> rootData;

    if (rootData == -1)
    {
        return NULL;
    }
    PBTNODE root = new BTNODE(rootData);
    queue<PBTNODE> pendingnodes;
    pendingnodes.push(root);

    while (pendingnodes.size() != 0)
    {
        PBTNODE front = pendingnodes.front();
        pendingnodes.pop();

        int leftChildData;
        cout << "Enter the left child of " << front->data << endl;
        cin >> leftChildData;

        if (leftChildData != -1)
        {
            PBTNODE leftChild = new BTNODE(leftChildData);
            front->left = leftChild;
            pendingnodes.push(leftChild);
        }
        int rightChildData;
        cout << "Enter the right child of " << front->data << endl;
        cin >> rightChildData;
        if (rightChildData != -1)
        {
            PBTNODE rightChild = new BTNODE(rightChildData);
            front->right = rightChild;
            pendingnodes.push(rightChild);
        }
    }
    return root;
}
void PostOrderTravarsal(PBTNODE root)
{
    if(root==NULL)
    {
        return;
    }
    PostOrderTravarsal(root->left);
    PostOrderTravarsal(root->right);
    cout<<root->data<<" ";
}
int main()
{
    PBTNODE root = TakeInputLevelWise();
    cout << "PostOrder Travarsal is:";
    PostOrderTravarsal(root);
    return 0;
}