#include <iostream>
#include <string>
#include <fstream>
#include "linkedlist.h"
#include "exerciselinkedlist.h"
using std::cin;
using std::cout;
using std::endl;
using namespace std;

class fitnessclasswrapper {
private:
	fstream infile;
	fstream e_infile;
	fstream outfile;
	DietPlan diet_data;
	ExercisePlan exercise_data;
	linked_list my_diet_list;
	exercise_linked_list my_exercise_list;
public:
	void runAPP(void);
	void Display_menu();
	void load_Dailyplan_diet();
	void load_Dailyplan_exercise();
	void load_weeklyplan_diet();
	void load_weeklyplan_exercise();
	void display_dailyplan_diet();
	void display_dailyplan_exercise();
	void display_weeklyplan_diet();
	void display_weeklyplan_exercise();
	void write_dailyplan_diet();
	void write_dailyplan_exercise();
	void write_weeklyplan_diet();
	void write_weeklyplan_exercise();
	void edit_dailydiet_plan();
	void edit_dailyexercise_plan();
	void empty_diet_list();
	void empty_exercise_list();

};

