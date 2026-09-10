#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;
public:
    Student(int r, string n, float m) : roll(r), name(n), marks(m) {}
    
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }
    
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1(101, "Alice", 88.5);
    Student backup = s1; 
    
    cout << "Original Record: ";
    s1.display();
    cout << "Backup Record: ";
    backup.display();
    
    return 0;
}