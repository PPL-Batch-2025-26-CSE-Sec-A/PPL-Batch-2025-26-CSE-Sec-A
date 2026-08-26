#include<iostream>
using namespace std;
class Student{
 int roll,marks[5],total=0;
 public:
 void input(){
  cin>>roll;
  for(int i=0;i<5;i++){
   cin>>marks[i];
  }
 }
 void totalMarks(){
  for(int i=0;i<5;i++){
   total=total+marks[i];
  }
  cout<<"Roll No: "<<roll<<endl;
  cout<<"Total Marks: "<<total;
 }
};
int main(){
 Student s;
 s.input();
 s.totalMarks();
 return 0;
}
