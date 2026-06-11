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

        if (element < parent->info)
        {
            parent->leftchild = newNode;
        }
        else if (element > parent->info)
        {
            parent->rightchild = newNode;
        }
    }

     void inorder(Node *ptr)
    {
        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }

         if (ptr != NULL)
        {
            inorder(ptr->leftchild);
            cout << ptr->info << " ";
            inorder(ptr->rightchild);
        }
    }

     void preorder(Node *ptr)
    {
        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }

          if (ptr != NULL) 
        {
            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }
    }

        void postorder(Node *ptr)
    {
        // Performs the postorder traversal of the tree
        if (ROOT == NULL)
        {
            cout << "Tree is empty" << endl;
            return;
        }

        if (ptr != NULL)
        {
            postorder(ptr->leftchild);
            postorder(ptr->rightchild);
            cout << ptr->info << " ";
        }
    }
};
