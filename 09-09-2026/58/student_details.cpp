#include <iostream>
#include <string>
using namespace std;
class Student {
    int roll;
    string name;
    int marks;
public:
    Student(int r, string n, int m) : roll(r), name(n), marks(m) {}
    Student(const Student &s) : roll(s.roll), name(s.name), marks(s.marks) {}
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1(1, "Mohan", 95);
    Student s2(s1);
    s1.display();
    s2.display();
    return 0;
}

