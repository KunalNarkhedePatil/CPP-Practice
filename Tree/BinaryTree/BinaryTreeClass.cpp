#include <iostream>
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
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
typedef BinaryTree<int> *PTNODE;
typedef BinaryTree<int> TNODE;

void printTree(PTNODE root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << root->left->data << ",";
    }
    if (root->right != NULL)
    {
        cout << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}
PTNODE TakeInput()
{
    int rootData;
    cout << "Enter the data\n";
    cin >> rootData;

    if (rootData == -1)
    {
        return NULL;
    }
    PTNODE root = new TNODE(rootData);
    PTNODE leftChild = TakeInput();
    PTNODE rightChild = TakeInput();

    root->left = leftChild;
    root->right = rightChild;

    return root;
}
int main()
{ /*
     PTNODE root=new TNODE(10);
     PTNODE node1=new TNODE(20);
     PTNODE node2=new TNODE(30);

     root->left=node1;
     root->right=node2;
 */
    PTNODE root = TakeInput();
    printTree(root);

    return 0;
}