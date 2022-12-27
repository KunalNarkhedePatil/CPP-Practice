#include <iostream>
#include <vector>
#include <queue>
using namespace std;
template <typename T>
class TreeNode
{
public:
    int data;
    vector<TreeNode<int> *> children;

    TreeNode(int data)
    {
        this->data = data;
    }
};
typedef TreeNode<int> *PTNODE;
typedef TreeNode<int> TNODE;
void printTree(PTNODE root)
{
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}
void PrintTreeLevelWise(PTNODE root)
{
    queue<PTNODE> pendingnodes;
    pendingnodes.push(root);

    while (pendingnodes.size() != 0)
    {
        PTNODE front = pendingnodes.front();
        pendingnodes.pop();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data << ",";
            pendingnodes.push(front->children[i]);
        }
        cout << endl;
    }
}
PTNODE TakeInputLevelWise()
{
    int rootData;
    cout << "Enter the rootData\n";
    cin >> rootData;

    PTNODE root = new TNODE(rootData);
    queue<PTNODE> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        PTNODE front = pendingNodes.front();
        pendingNodes.pop();

        int numChild;
        cout << "Enter the number of child of " << front->data << endl;
        cin >> numChild;

        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter the " << i << " th child of " << front->data << endl;
            cin >> childData;

            PTNODE child = new TNODE(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
int main()
{
    PTNODE root = TakeInputLevelWise();
    // printTree(root);
    PrintTreeLevelWise(root);
    return 0;
}