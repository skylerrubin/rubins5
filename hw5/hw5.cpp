#include <iostream>

class Node
{
public:
    int data;
    Node *leftChild;
		Node *rightChild;
    Node(int data)
    {
        this->data = data;
        leftChild = NULL;
				rightChild = NULL;
    }
};

void preorderDFS(class Node* node)
{
if (node == NULL)
{
return;
}
else
{
std::cout << node->data << " ";
preorderDFS(node->leftChild);
preorderDFS(node->rightChild);
return;
}
}
int main()
{
std::cout << "We wish to traverse through the binary tree below with PreOrder DFS " << '\n';
std::cout << '\n';
std::cout << "	        2            " << '\n';
std::cout	<< "	     7     5         " << '\n';
std::cout << "          2    6     9 " << '\n';
std::cout << "	      5 11  4        " << '\n';
std::cout << '\n';
Node *root = new Node(2);
std::cout << "The sequence of the traversal with be reiterated as follows below" << '\n';
std::cout << '\n';
std::cout << "The traversal begins at the root (parent)" << '\n';
preorderDFS(root);
std::cout << '\n';
root->leftChild = new Node(7);
std::cout << "The Pre order DFS follows to the left child first" << '\n';
preorderDFS(root);
std::cout << '\n';
root->leftChild->leftChild = new Node(2);
std::cout << "We traverse to the left grandchildren with an empty left greatgrandchild and empty right greatgrandchild" << '\n';
preorderDFS(root);
std::cout << '\n';
root->leftChild->rightChild = new Node(6);
std::cout << "Next we traverse the right grandchild of the left child" << '\n';
preorderDFS(root);
std::cout << '\n';
root->leftChild->rightChild->leftChild = new Node(5);
std::cout << "Then the left greatgrandchild of the right grandchild with empty nodes to follow" << '\n';
preorderDFS(root);
std::cout << '\n';
root->leftChild->rightChild->rightChild = new Node(11);
std::cout << "Then the right greatgrandchild of the right grandchild with empty nodes to follow as well" << '\n';
preorderDFS(root);
std::cout << '\n';
root->rightChild = new Node(5);
std::cout << "We return now to the right child of the parent as there are no left child nodes left to traverse" << '\n';
preorderDFS(root);
std::cout << '\n';
root->rightChild->rightChild = new Node(9);
std::cout << "We follow to an empty left granchild then to a right grandchild" << '\n';
preorderDFS(root);
std::cout << '\n';
root->rightChild->rightChild->leftChild = new Node(4);
std::cout << "We conclude the pre order transversal with a left greatgrandchild of the right grandchild with empty nodes and no right greatgrandchild" << '\n';
preorderDFS(root);
std::cout << '\n';
return 0;
}
