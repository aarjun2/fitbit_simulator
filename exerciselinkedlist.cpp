#include "exerciselinkedlist.h"

exercise_List_node* exercise_linked_list::make_node(ExercisePlan data) {
	exercise_List_node* node = new exercise_List_node;
	node->data = data;
	node->next = NULL;
	return node;
}

void exercise_linked_list::exercise_insert_head(ExercisePlan data) {
	exercise_List_node* new_node = make_node(data);
	new_node->next = head;
	head = new_node;
}

exercise_List_node* exercise_linked_list::get_head() {
	return head;
}

void exercise_linked_list::set_head(exercise_List_node* ptr) {
	head = ptr;
}