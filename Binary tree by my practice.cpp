// This is Arka's code.....


/*
               5

         7            8

    10      12   13       14


*/
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *create_node(int item)
{
    Node *n = new Node;
    n->data = item;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void add_left(Node *node, Node *child)
{
    node->left = child;
}
void add_right(Node *node, Node *child)
{
    node->right = child;
}
void pre_order(Node *root)
{
    cout << root->data << " ";
    if (root->left != NULL)
    {
        pre_order(root->left);
    }
    if (root->right != NULL)
    {
        pre_order(root->right);
    }
}
void in_order(Node *root)
{
    if (root->left != NULL)
    {
        in_order(root->left);
    }
    cout << root->data << " ";
    if (root->right != NULL)
    {
        in_order(root->right);
    }
}
void post_order(Node *root)
{
    if (root->left != NULL)
    {
        post_order(root->left);
    }
    if (root->right != NULL)
    {
        post_order(root->right);
    }
    cout << root->data << " ";
}
Node *create_tree()
{
    Node *five = create_node(5);
    Node *seven = create_node(7);
    Node *eight = create_node(8);

    add_left(five, seven);
    add_right(five, eight);

    Node *ten = create_node(10);
    Node *twelve = create_node(12);
    Node *thirteen = create_node(13);
    Node *fourteen = create_node(14);

    add_left(seven, ten);
    add_right(seven, twelve);

    add_left(eight, thirteen);
    add_right(eight, fourteen);
    return five;
}
int main()
{
    Node *root = create_tree();
    cout << "Pre order = ";
    pre_order(root);
    cout << endl;
    cout << "In order = ";
    in_order(root);
    cout << endl;
    cout << "Post order = ";
    post_order(root);
}