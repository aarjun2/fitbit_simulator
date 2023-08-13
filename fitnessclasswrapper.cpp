#include "fitnessclasswrapper.h"
/**********
function: runapp
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: called in main, displays the menu and based on the option calls the function associated with it
Input parameters: none
Returns: none
preconditions: the functions need to be defined within the menu options to be called
postconditions: if executed right, will run the app and allow the user to edit, display and write to file
**/
void fitnessclasswrapper::runAPP(void) {
	int option = 0;
	while (option != 9) {
		Display_menu();
		cout << "choose an option from 1-9" << endl;
		cin >> option;
		switch (option) {
		case 1:
			load_weeklyplan_diet();
			break;
		case 2:
			load_weeklyplan_exercise();
			break;
		case 3:
			write_weeklyplan_diet();
			break;
		case 4:
			write_weeklyplan_exercise();
			break;
		case 5:
			display_weeklyplan_diet();
			break;
		case 6:
			display_weeklyplan_exercise();
			break;
		case 7:
			edit_dailydiet_plan();
			break;
		case 8:
			edit_dailyexercise_plan();
			break;
		case 9:
			cout << "exit" << endl;
			break;
		}
	}
}
/**********
function: Display menu
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: called in main, displays the menu and based on the option calls the function associated with it
Input parameters: none
Returns: none
preconditions: the functions need to be defined within the menu options to be called
postconditions: if executed right, will run the app and allow the user to edit, display and write to file
**/
void fitnessclasswrapper::Display_menu() {
	cout << "1. Load weekly diet plan from file" << endl;
	cout << "2. Load weekly exercise plan from file" << endl;
	cout << "3. Store weekly diet plan to file" << endl;
	cout << "4. Store weekly exercise plan to file" << endl;
	cout << "5. Display weekly diet plan to screen" << endl;
	cout << "6. Display weekly exercise plan to screen" << endl;
	cout << "7. Edit daily diet plan" << endl;
	cout << "8. Edit daily exercise plan" << endl;
	cout << "9. Exit" << endl;
}
/**********
function: load dailyplan diet
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: loads the diet plan from the text file
Input parameters: none
Returns: none
preconditions: the function's extraction operator must be defined in order to load the information and a diet class must be created
postconditions: if executed right, will load the data from the infile and store it into the class
**/
void fitnessclasswrapper::load_Dailyplan_diet() {
	infile >> diet_data;
}
/**********
function: load dailyplan exercise
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: loads the exercise plan from the text file
Input parameters: none
Returns: none
preconditions: the function's extraction operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will load the data from the infile and store it into the class
**/
void fitnessclasswrapper::load_Dailyplan_exercise() {
	e_infile >> exercise_data;
}
/**********
function: load weeklyplan diet
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: loads the diet plan from the text file for all nodes
Input parameters: none
Returns: none
preconditions: the function's extraction operator must be defined in order to load the information and a diet class must be created
postconditions: if executed right, will load the data from the infile and store it into a linked list till it reaches end of file
**/
void fitnessclasswrapper::load_weeklyplan_diet() {
	infile.open("dietplan.txt", ios::in);
	if (infile.is_open()) {
		empty_diet_list();
		while (!infile.eof()) {
			load_Dailyplan_diet();
			my_diet_list.insert_head(diet_data);
		}
	}
	infile.close();
}
/**********
function: load weeklyplan exercise
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: loads the exercise plan from the text file for all nodes
Input parameters: none
Returns: none
preconditions: the function's extraction operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will load the data from the infile and store it into a linked list till it reaches end of file
**/
void fitnessclasswrapper::load_weeklyplan_exercise() {
	e_infile.open("exerciseplan.txt", ios::in);
	if (e_infile.is_open()) {
		empty_exercise_list();
		while (!e_infile.eof()) {
			load_Dailyplan_exercise();
			my_exercise_list.exercise_insert_head(exercise_data);
		}
	}
	e_infile.close();
}
/**********
function: display dailyplan diet
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: displays the diet plan from the text file for one day
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and a diet class must be created
postconditions: if executed right, will print to the screen data from diet data class
**/
void fitnessclasswrapper::display_dailyplan_diet() {
	cout << endl;
	cout << diet_data << endl;
}
/**********
function: display dailyplan exercise
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: displays the exercise plan from the text file for one day
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will print to the screen data from exercise data class
**/
void fitnessclasswrapper::display_dailyplan_exercise() {
	cout << endl;
	cout << exercise_data << endl;
}
/**********
function: display weeklyplan diet
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: displays the diet plan from the text file for all seven node, runs through the linked list and
prints each data and node
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and a diet class must be created
postconditions: if executed right, will print to the screen data from diet data class
**/
void fitnessclasswrapper::display_weeklyplan_diet() {
	List_node* temp;
	temp = my_diet_list.get_head();
	while (temp != NULL) {
		diet_data = temp->data;
		display_dailyplan_diet();
		temp = temp->next;
	}
}
/**********
function: display weeklyplan exercise
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: displays the diet plan from the text file for all seven node, runs through the linked list and
prints each data and node
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will print to the screen data from exercise data class
**/
void fitnessclasswrapper::display_weeklyplan_exercise() {
	exercise_List_node* temp;
	temp = my_exercise_list.get_head();
	while (temp != NULL) {
		exercise_data = temp->data;
		display_dailyplan_exercise();
		temp = temp->next;
	}
}
/**********
function: write dailyplan diet
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: displays the diet plan from the text file for all seven node, runs through the linked list and
prints each data and node
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will print to the screen data from exercise data class
**/
void fitnessclasswrapper::write_dailyplan_diet() {
	outfile << diet_data;
}
/**********
function: write dailyplan diet
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: displays the diet plan from the text file for all seven node, runs through the linked list and
prints each data and node
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will print to the screen data from exercise data class
**/
void fitnessclasswrapper::write_weeklyplan_diet() {
	outfile.open("dietplan.txt", ios::out);
	if (outfile.is_open()) {
		List_node* temp;
		temp = my_diet_list.get_head();
		while(temp != NULL) {
			diet_data = temp->data;
			write_dailyplan_diet();
			if (temp->next != NULL) {
				outfile << endl;
			}
			temp = temp->next;
		}
		outfile.close();
	}
}
/**********
function: write dailyplan exercise
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: writes the diet plan from the text file for a node, runs through the linked list and
prints each data and node
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will print to the screen data from exercise data class
**/
void fitnessclasswrapper::write_dailyplan_exercise() {
	outfile << exercise_data;
}
/**********
function: write weeklyplan exercise
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: writes the exercise plan to the same text file for all seven node, runs through the linked list and
prints each data and node
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will write to file the updated data
**/
void fitnessclasswrapper::write_weeklyplan_exercise() {
	outfile.open("exerciseplan.txt", ios::out);
	if (outfile.is_open()) {
		exercise_List_node* temp;
		temp = my_exercise_list.get_head();
		while (temp != NULL) {
			exercise_data = temp->data;
			write_dailyplan_exercise();
			if (temp->next != NULL) {
				outfile << endl;
			}
			temp = temp->next;
		}
		outfile.close();
	}
}
/**********
function: edit dailyplan diet
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: allows the user to edit the goal attribute of the exercise class
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will update the new goal
**/
void fitnessclasswrapper::edit_dailydiet_plan() {
	List_node* temp;
	temp = my_diet_list.get_head();
	string target_plan;
	string empty;
	int menu_int = 0;
	cout << "enter target plan name: ";
	getline(cin, empty);
	getline(cin, target_plan);
	while (temp != NULL && (target_plan != temp->data.get_plan_name())) {
		temp = temp->next;
	}
	if (temp == NULL) {
		cout << endl;
		cout << "entered target plan does not exist" << endl;
		return;
	}
	int goals = 0;
	cout << endl << "enter new goal calories: ";
	cin >> goals;
	temp->data.set_goal_calories(goals);
	return;
}
/**********
function: edit dailyplan exercise
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: allows the user to edit the goal attribute of the exercise class
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will update the new goal
**/
void fitnessclasswrapper::edit_dailyexercise_plan() {
	exercise_List_node* temp;
	temp = my_exercise_list.get_head();
	string target_plan;
	string empty;
	int menu_int = 0;
	cout << "enter target plan name: ";
	getline(cin, empty);
	getline(cin, target_plan);
	while (temp != NULL && (target_plan != temp->data.get_plan_name())) {
		temp = temp->next;
	}
	if (temp == NULL) {
		cout << endl;
		cout << "entered target plan does not exist" << endl;
		return;
	}
	int goals = 0;
	cout << endl << "enter new goal steps: ";
	cin >> goals;
	temp->data.set_goal_steps(goals);
	return;
}
/**********
function: empty diet list
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: initializes the exercise list to NULL
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will initialzie a list to NULL for reuse
**/
void fitnessclasswrapper::empty_diet_list() {
	List_node* temp;
	List_node* prev;
	temp = my_diet_list.get_head();
	while (temp != NULL) {
		prev = temp;
		temp = temp->next;
		free(prev);
	}
	my_diet_list.set_head(NULL);
}

/**********
function: empty exercise list
Date created: 3/2/2022
Date last modified:3/1/2022, 3/2/2022, 3/3/2022, 3/4/2022
Description: initializes the exercise list to NULL
Input parameters: none
Returns: none
preconditions: the function's insertion operator must be defined in order to load the information and an exercise class must be created
postconditions: if executed right, will initialzie a list to NULL for reuse
**/
void fitnessclasswrapper::empty_exercise_list() {
	exercise_List_node* temp;
	exercise_List_node* prev;
	temp = my_exercise_list.get_head();
	while (temp != NULL) {
		prev = temp;
		temp = temp->next;
		free(prev);
	}
	my_exercise_list.set_head(NULL);
}

