#include <iostream>
#include <string>
#include "Listnode.h"
using std::cin;
using std::cout;
using std::endl;
using namespace std;

class linked_list {
private:
	List_node* head;
public:
	linked_list() {
		head = NULL;
	}
	List_node* make_node(DietPlan data);
	void insert_head(DietPlan data);
	List_node* get_head();
	void set_head(List_node* ptr);
};