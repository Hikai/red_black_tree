#include "red_black_tree.h"

void Store::check_color(Node * node)
{
	if (node->parent_node == nullptr) {
		node->color = Color::black;
		return;
	}
	if (node->parent_node->color == Color::black) {
		node->color = Color::red;
		return;
	}
}

Node * Store::create_node(int data)
{
	Node * node = new Node;
	node->color = Color::black;
	node->data = data;
	node->child_left = nullptr;
	node->child_right = nullptr;
	node->parent_node = nullptr;
	return node;
}

void Store::separate_node(Node * node)
{
	node->data = NULL;
	node->child_left = nullptr;
	node->child_right = nullptr;
	node->parent_node = nullptr;
	Store::destory_node(node);
}