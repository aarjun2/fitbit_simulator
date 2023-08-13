#include <iostream>
#include <string>
#include "exerciselistnode.h"
using std::cin;
using std::cout;
using std::endl;
using namespace std;

class exercise_linked_list {
private:
	exercise_List_node* head;
public:
	exercise_linked_list() {
		head = NULL;
	}
	exercise_List_node* make_node(ExercisePlan data);
	void exercise_insert_head(ExercisePlan data);
	exercise_List_node* get_head();
	void set_head(exercise_List_node* ptr);
};