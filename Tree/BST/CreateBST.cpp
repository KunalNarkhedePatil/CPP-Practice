#include<iostream>

using namespace std;
class BstNode
{
    public:
    int data;
    BstNode *left;
    BstNode *right;

    BstNode(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
typedef class BstNode BSTNODE;
typedef class BstNode * PBSTNODE;

class BST
{
   public:

   PBSTNODE Insert(PBSTNODE root,int data)
   {
      if(root==NULL)
      {
        root=new BstNode(data);
        return root;
      }
      if(root->data>data)
      {
        root->left=Insert(root->left,data);
      }
      else if(root->data<data)
      {
        root->right=Insert(root->right,data);
      }
     return root;
   }
   void InOrder(PBSTNODE root)
   {
      if(root==NULL)
      {
        return;
      }
      InOrder(root->left);
      cout<<root->data<<" ";
      InOrder(root->right);
   }
};


int main()
{
    PBSTNODE root=NULL;
    BST *obj=new BST();
    root=obj->Insert(root,50);
    obj->Insert(root,30);
    obj->Insert(root,20);
    obj->Insert(root,40);
    obj->Insert(root,70);
    obj->Insert(root,60);
    obj->Insert(root,80);

    obj->InOrder(root);
    return 0;
}