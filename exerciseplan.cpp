#include "exerciseplan.h" 

ExercisePlan::ExercisePlan() {
	this->plan_name = "";
	this->goal_steps = 0;
	this->date = "";
}

ExercisePlan::ExercisePlan(const ExercisePlan& myplan) {
	plan_name = myplan.plan_name;
	goal_steps = myplan.goal_steps;
	date = myplan.date;
}

ExercisePlan::~ExercisePlan() {
	this->plan_name = "";
	this->goal_steps = 0;
	this->date = "";
}
void ExercisePlan::set_goal_steps(int& goal_steps) {
	this->goal_steps = goal_steps;
}
int& ExercisePlan::get_goal_steps() {
	return goal_steps;
}
void ExercisePlan::set_plan_name(string& plan_name) {
	this->plan_name = plan_name;
}
string& ExercisePlan::get_plan_name() {
	return plan_name;
}
void ExercisePlan::set_date(string& date) {
	this->date = date;
}
string& ExercisePlan::get_date() {
	return date;
}

ExercisePlan& ExercisePlan::operator=(const ExercisePlan& rhs) {
	this->date = rhs.date;
	this->plan_name = rhs.plan_name;
	this->goal_steps = rhs.goal_steps;
	return *this;
}

ostream& operator<<(ostream& outfile, ExercisePlan& value) {
	outfile << value.get_plan_name() << endl;
	outfile << value.get_goal_steps() << endl;
	outfile << value.get_date() << endl;
	return outfile;
}

istream& operator>>(istream& infile, ExercisePlan& value) {
	string input;
	getline(infile, input);
	value.set_plan_name(input);
	getline(infile, input);
	int num = std::stoi(input);
	value.set_goal_steps(num);
	getline(infile, input);
	value.set_date(input);
	getline(infile, input);
	return infile;
}