// Student ID: B10615043
// Date: Dec 10, 2018
// Last Update: Dec 10, 2018
// Problem statement: This C++ header to implement class Node and BST(Binary Search Tree).
#include "BST.h"

Node * BST::search(int key)
{
	Node *cur = root;

	while (cur != NULL && key != cur->key)
	{
		if (cur->key > key)
		{
			cur = cur->left;
		}
		else
		{
			cur = cur->right;
		}
	}
	return cur;
}

void BST::insertNode(int key)
{
	Node *temp = 0;
	Node *newParent = 0;
	Node *newNode = new Node(key);

	if (search(key) != NULL)
	{
		std::cout << "Element already existed." << std::endl;
		return;
	}
	temp = root;

	while (temp != NULL)
	{
		newParent = temp;
		if (newNode->key < temp->key)
		{
			temp = temp->left;
		}
		else
		{
			temp = temp->right;
		}
	}

	newNode->parent = newParent;

	if (newParent == NULL)
	{
		root = newNode;
	}
	else if (newNode->key > newParent->key)
	{
		newParent->right = newNode;
	}
	else
	{
		newParent->left = newNode;
	}
}

void BST::deleteNode(int key)
{
	Node *target = search(key);
	if (target == NULL)
	{
		std::cout << "No match." << std::endl;
		return;
	}

	Node *realTarget = 0;
	Node *targetChild = 0;

	if (target->left == NULL && target->right == NULL)
	{
		realTarget = target;
	}
	else
	{
		realTarget = successor(target);
	}

	if (realTarget->left != NULL)
	{
		targetChild = realTarget->left;
	}
	else
	{
		targetChild = realTarget->right;
	}

	if (targetChild != NULL)
	{
		targetChild->parent = realTarget->parent;
	}

	if (realTarget->parent == NULL)
	{
		if (targetChild)
		{
			root = targetChild;
		}
		else
		{
			root = 0;
		}
	}
	else if (realTarget == realTarget->parent->left)
	{
		realTarget->parent->left = targetChild;
	}
	else
	{
		realTarget->parent->right = targetChild;
	}

	if (realTarget != target)
	{
		target->key = realTarget->key;
 	}

	delete realTarget;
	realTarget = 0;
}

void BST::inOrderPrint()
{
	Node *cur = new Node;
	cur = leftMost(root);

	while (cur)
	{
		std::cout << cur->key << " ";
		cur = successor(cur);
	}
	std::cout << std::endl;
}

std::string BST::minelement(int threshold)
{
	Node *cur = new Node;
	cur = leftMost(root);
	int sum = 0;

	while (cur)
	{
		if (sum + cur->key >= threshold)
		{
			return std::to_string(cur->key);
		}
		sum += cur->key;
		cur = successor(cur);
	}
	return std::string("No such element.");
}

Node * BST::leftMost(Node * cur)
{
	while (cur->left != NULL)
	{
		cur = cur->left;
	}
	return cur;
}

Node * BST::successor(Node * cur)
{
	if (cur->right != NULL)
	{
		return leftMost(cur->right);
	}

	Node *successor = cur->parent;
	while (successor != NULL && cur == successor->right)
	{
		cur = successor;
		successor = successor->parent;
	}
	return successor;
}


