#include<iostream>
using namespace std;
class Employee{
 float salary,allowance;
 public:
 void input(){
  cin>>salary>>allowance;
 }
 void display(){
  cout<<salary<<" "<<allowance<<endl;
 }
};
int main(){
 Employee e[3];
 for(int i=0;i<3;i++){
  e[i].input();
 }
 for(int i=0;i<3;i++){
  e[i].display();
 }
 return 0;
}
