#include<iostream>
#include<queue>

using namespace std;
template <typename T>
class BinaryTree
{
   public:
   int data;
   BinaryTree *left;
   BinaryTree *right;

   BinaryTree(int data)
   {
      this->data=data;
      this->left=NULL;
      this->right=NULL;
   }

};
typedef BinaryTree<int> * PBTNODE;
typedef BinaryTree<int> BTNODE;

PBTNODE TakeInputLevelWise()
{
    int rootData;
    cout<<"Enter the rootData\n";
    cin>>rootData;

    if(rootData==-1)
    {
        return NULL;
    }
    PBTNODE root=new BTNODE(rootData);
    queue<PBTNODE> pendingnodes;
    pendingnodes.push(root);

    while(pendingnodes.size()!=0)
    {
        PBTNODE front=pendingnodes.front();
        pendingnodes.pop();

        int leftChildData;
        cout<<"Enter the left child of "<<front->data<<endl;
        cin>>leftChildData;

        if(leftChildData!=-1)
        {
            PBTNODE leftChild=new BTNODE(leftChildData);
            front->left=leftChild;
            pendingnodes.push(leftChild);
        }
        int rightChildData;
        cout<<"Enter the right child of "<<front->data<<endl;
        cin>>rightChildData;

        if(rightChildData!=-1)
        {
            PBTNODE rightChild=new BTNODE(rightChildData);
            front->right=rightChild;
            pendingnodes.push(rightChild);
        }
    }
    return root;
    
}
void PrintTreeLevelWise(PBTNODE root)
{
    if(root==NULL)
    {
        return;
    }
    queue<PBTNODE> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        PBTNODE front=pendingnodes.front();
        pendingnodes.pop();
        cout<<front->data<<":";
        if(front->left!=NULL)
        {
            cout<<front->left->data<<",";
            pendingnodes.push(front->left);
        }
        if(front->right!=NULL)
        {
            cout<<front->right->data<<",";
            pendingnodes.push(front->right);
        }
        cout<<endl;
    }
}
int main()
{
    PBTNODE  root=TakeInputLevelWise();
    PrintTreeLevelWise(root);
    return  0;
}