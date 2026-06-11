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