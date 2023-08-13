#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using namespace std;

class ExercisePlan {
public:
	ExercisePlan();
	ExercisePlan(const ExercisePlan& myplan);
	~ExercisePlan();
	void set_goal_steps(int& goal_calories);
	int& get_goal_steps();
	void set_plan_name(string& plan_name);
	string& get_plan_name();
	void set_date(string& date);
	string& get_date();
	ExercisePlan& operator= (const ExercisePlan& rhs);
private:
	int goal_steps;
	string plan_name;
	string date;
};

ostream& operator<<(ostream& outfile, ExercisePlan& value);
istream& operator>>(istream& infile, ExercisePlan& value);