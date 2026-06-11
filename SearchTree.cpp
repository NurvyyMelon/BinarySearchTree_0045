#include <iostream>
#include <string>
using namespace std;

class node
{
    public:
    string info;
    Node *leftchild;
    Node *rightchild;

    //constructor for node class
    Node(string i, Node *1, Node *r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};
class BinaryTree
{
public:
    Node *ROOT;
    BinaryTree()
    {
        ROOT = NULL; //initially set ROOT to null
    }

    //insert a node in the binary search tree
    void insert(string element)
    {
        Node *newNode = new Node(element, NULL, NULL);

        newNode->info = element;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;

          Node *parent = NULL;
        Node *currentNode = NULL;

        search(element, parent, currentNode);

         if (parent == NULL)
        {
            ROOT = newNode;
            return;
        }