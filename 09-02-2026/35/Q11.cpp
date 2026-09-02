#include<iostream>
using namespace std;
class Student{
	private:
		int marks;
		public:
			void input(){
				cout<<"Enter the marks: ";
				cin>>marks;
            }
            friend void compare(Student s1, Student s2);
};
void compare(Student s1,Student s2){
	if(s1.marks>s2.marks){
		cout<<"1st Student is better."<<endl;
		cout<<"Marks: "<<s1.marks<<endl;
	}
	else if(s1.marks<s2.marks){
		cout<<"2nd Student is better: "<<endl;
		cout<<"Marks: "<<s2.marks<<endl;
	}
	else{
		cout<<"both Students are equal: "<<endl;
	}
}
int main(){
	Student s1,s2;
	cout<<"Enter marks of 1st Student: "<<endl;
	s1.input();
	cout<<"\nEnter marks os 2nd Student: "<<endl;
	s2.input();
	compare (s1,s2);
	return 0;
}
