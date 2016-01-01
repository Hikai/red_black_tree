#include "red_black_tree.h"

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

void Store::add_node(Node * node)
{
	if (node_root == nullptr) {
		node_root = node;
	}
	else if (node_root->child_left == nullptr) {
		node_root->child_left = node;
		node_root->child_left->parent_node = node_root;
		if (node_root->child_left->parent_node->color == Color::black) {
			node_root->child_left->color = Color::red;
		}
	}
	else {
		node_root->child_right = node;
		node_root->child_right->parent_node = node_root;
		if (node_root->child_right->parent_node->color == Color::black) {
			node_root->child_right->color = Color::red;
		}
	}
}

void Store::separate_node(Node * node)
{
	if (node_root == node) {
		node_root = nullptr;
	}
	node->data = NULL;
	node->child_left = nullptr;
	node->child_right = nullptr;
	node->parent_node = nullptr;
	Store::destory_node(node);
}