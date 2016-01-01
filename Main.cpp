#include "red_black_tree.h"

int main()
{
	Node * node1 = new Node;
	Node * node2 = new Node;
	Node * node3 = new Node;
	Store * store = new Store;
	node1 = store->create_node(123);
	node2 = store->create_node(321);
	node3 = store->create_node(132);
	store->add_node(node1);
	store->add_node(node2);
	store->add_node(node3);
	store->separate_node(node3);
	store->separate_node(node2);
	store->separate_node(node1);
	delete node3;
	delete node2;
	delete node1;
	delete store;
	return 0;
}