#include<iostream>
using namespace std;
class Student{
int m;
public:
Student(int x){m=x;}
friend void compare(Student a,Student b);
};
void compare(Student a,Student b){
if(a.m>b.m)cout<<"Student 1 has higher marks";
else if(b.m>a.m)cout<<"Student 2 has higher marks";
else cout<<"Both have equal marks";
}
int main(){
int a,b;
cout<<"Enter marks: ";
cin>>a>>b;
Student s1(a),s2(b);
compare(s1,s2);
}
