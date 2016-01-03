#pragma once
#ifndef _RED_BLACK_TREE_H_
#define _RED_BLACK_TREE_H_

#include <iostream>

using namespace std;

enum class Color {
	black = 0,
	red = 1
};

class Node {
public :
	int data;
	Node * child_left;
	Node * child_right;
	Node * parent_node;
	Color color;
	Node()
	{

	}
	~Node()
	{

	}
};

class Store {
private :
	void destory_node(Node * node)
	{
		delete node;
	}
public :
	Store()
	{

	}
	~Store()
	{

	}
	Node * create_node(int);
	void check_color(Node *);
	void separate_node(Node *);
};

#endif