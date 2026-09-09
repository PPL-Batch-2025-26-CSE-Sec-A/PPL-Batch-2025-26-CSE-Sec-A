#include<iostream>
using namespace std;
class Car {
	private:
		string model;
		float price;
		static int totalCars;
	public:
		Car(string m,float p)
		{
			model = m;
			price = p;
			totalCars++;
		}
		static void ShowTotal()
		{
			cout << "Total Cars Created:" << totalCars << endl;
		}
		void display()
		{
			cout << "Mode: " << model << endl;
			cout << "Price: " << price << endl;
		}
};
int Car :: totalCars = 0;
int main(){
	Car c1("Mercedes", 50000);
	Car c2("Audi",75000);
	Car c3("Tesla",9000);
	c1.display();
	cout << endl;
	c2.display();
	cout << endl;
	c3.display();
	cout << endl;
	Car :: ShowTotal();
	return 0;
}
