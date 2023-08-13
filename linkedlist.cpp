#include "linkedlist.h"

List_node* linked_list::make_node(DietPlan data) {
	List_node* node = new List_node;
	node->data = data;
	node->next = NULL;
	return node;
}

void linked_list::insert_head(DietPlan data) {
	List_node* new_node = make_node(data);
	new_node->next = head;
	head = new_node;
}

List_node* linked_list::get_head() {
	return head;
}

void linked_list::set_head(List_node* ptr) {
	head = ptr;
}