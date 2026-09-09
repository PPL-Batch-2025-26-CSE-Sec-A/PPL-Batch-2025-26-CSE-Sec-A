#include <iostream>
using namespace std;
class Employee{
	private:
		float basicSalary;
		float bonus;
	public:
		Employee (float basic,float b)
		{
			basicSalary = basic;
			bonus = b;
		}
		friend void calculateTotalSalary(Employee e);
};
void calculateTotalSalary(Employee e)
{
	float totalSalary = e.basicSalary + e.bonus;
	cout << "Basic Salary:" << e.basicSalary << endl;
	cout << "Bonus:" << e.bonus << endl;
	cout << "Total Salary:" << totalSalary << endl;
}
int main(){
	Employee e1(50000,5000);
	calculateTotalSalary(e1);
	return 0;
}
