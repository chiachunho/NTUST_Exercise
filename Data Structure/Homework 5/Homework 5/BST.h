// Student ID: B10615043
// Date: Dec 10, 2018
// Last Update: Dec 23, 2018
// Problem statement: This C++ header to declare class Node and BST(Binary Search Tree).
#pragma once
#include <iostream>
#include <string>

class BST;

class Node
{
public:
	Node() :left(0), right(0), parent(0), key(0) {};
	Node(int key) :left(0), right(0), parent(0), key(key) {};
	int size(Node *node);
	int getKey() { return key; };

private:
	Node *left;
	Node *right;
	Node *parent;
	int key;
	int leftSize;

	friend class BST;
};

class BST
{
public:
	BST() :root(0) {};
	
	Node* search(int key);
	void insertNode(int key);
	void deleteNode(int key);
	void inOrderPrint();
	std::string minelement(int threshold);
	int avg(int l, int u);

private:
	Node *root;
	Node* leftMost(Node *cur);
	Node* successor(Node *cur);
	void updateLeftSize();
	Node* searchByRank(int r);
};