#include "dietplan.h" 

DietPlan::DietPlan() {
	this->plan_name = "";
	this->goal_calories = 0;
	this->date = "";
}

DietPlan::DietPlan(const DietPlan& myplan) {
	plan_name = myplan.plan_name;
	goal_calories = myplan.goal_calories;
	date = myplan.date;
}

DietPlan::~DietPlan() {
	this->plan_name = "";
	this->goal_calories = 0;
	this->date = "";
}

void DietPlan::set_goal_calories(int& goal_calories) {
	this->goal_calories = goal_calories;
}
int& DietPlan::get_goal_calories() {
	return goal_calories;
}
void DietPlan::set_plan_name(string& plan_name) {
	this->plan_name = plan_name;
}
string& DietPlan::get_plan_name() {
	return plan_name;
}
void DietPlan::set_date(string& date) {
	this->date = date;
}
string& DietPlan::get_date() {
	return date;
}

DietPlan& DietPlan::operator=(const DietPlan& rhs) {
	this->date = rhs.date;
	this->plan_name = rhs.plan_name;
	this->goal_calories = rhs.goal_calories;
	return *this;
}

ostream& operator<<(ostream& outfile, DietPlan& value) {
	outfile << value.get_plan_name() << endl;
	outfile << value.get_goal_calories() << endl;
	outfile << value.get_date() << endl;
	return outfile;
}

istream& operator>>(istream& infile, DietPlan& value) {
	string input;
	getline(infile, input);
	value.set_plan_name(input);
	getline(infile, input);
	int num = std::stoi(input);
	value.set_goal_calories(num);
	getline(infile, input);
	value.set_date(input);
	getline(infile, input);
	return infile;
}

