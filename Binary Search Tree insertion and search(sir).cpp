#include <bits/stdc++.h>
using namespace std;
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

BstNode *create_node(int data)
{
    BstNode *new_node = new BstNode;
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
BstNode *Insert(BstNode *root, int data)
{
    if (root == NULL)
    {
        root = create_node(data);
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}
bool Search(BstNode *root, int data)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == data)
    {
        return true;
    }
    else if (data <= root->data)
    {
        return Search(root->left, data);
    }
    else
    {
        return Search(root->right, data);
    }
}
int main()
{
    BstNode *root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    int number;

    cout << "Enter number be searched = ";
    cin >> number;

    if (Search(root, number) == true)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}