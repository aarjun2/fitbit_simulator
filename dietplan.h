#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using namespace std;


class DietPlan {
public:
	DietPlan();
	DietPlan(const DietPlan &myplan);
	~DietPlan();
	void set_goal_calories(int& goal_calories);
	int& get_goal_calories();
	void set_plan_name(string &plan_name);
	string& get_plan_name();
	void set_date(string &date);
	string& get_date();
	DietPlan& operator= (const DietPlan& rhs);
private:
	int goal_calories;
	string plan_name;
	string date;
};

ostream& operator<<(ostream& outfile, DietPlan& data);
istream& operator>>(istream& infile, DietPlan& value);
