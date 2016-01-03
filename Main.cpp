#include "red_black_tree.h"

int main()
{
	Store * store = new Store;
	Node * node_a = store->create_node(1);
	Node * node_b = store->create_node(2);
	Node * node_c = store->create_node(3);
	Node * node_d = store->create_node(4);
	Node * node_e = store->create_node(5);
	Node * node_f = store->create_node(6);
	Node * node_g = store->create_node(7);
	node_a->child_left = node_b;
	node_a->child_right = node_c;
	node_b->child_left = node_d;
	node_b->child_right = node_e;
	node_b->parent_node = node_a;
	node_c->child_left = node_f;
	node_c->child_right = node_g;
	node_c->parent_node = node_a;
	node_d->parent_node = node_b;
	node_e->parent_node = node_b;
	node_f->parent_node = node_c;
	node_g->parent_node = node_c;
	store->check_color(node_a);
	store->check_color(node_b);
	store->check_color(node_c);
	store->check_color(node_d);
	store->check_color(node_e);
	store->check_color(node_f);
	store->check_color(node_g);
	cout << int(node_a->child_left->color) << ", " << int(node_a->child_right->color) << endl;
	store->separate_node(node_g);
	store->separate_node(node_f);
	store->separate_node(node_e);
	store->separate_node(node_d);
	store->separate_node(node_c);
	store->separate_node(node_b);
	store->separate_node(node_a);
	delete store;
	return 0;
}