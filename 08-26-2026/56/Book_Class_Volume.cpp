#include<iostream>
using namespace std;
class Book{
 float l,b,h;
 public:
 void input(){
  cin>>l>>b>>h;
 }
 void volume(){
  cout<<l*b*h;
 }
};
int main(){
 Book b;
 b.input();
 b.volume();
 return 0;
}