#include<iostream>
using namespace std;
class College{
    float marks;
public:
    College(float m){
        marks=m;
    }

    friend void compareMarks(College &s1,College &s2);
};

void compareMarks(College &s1,College &s2){
    if(s1.marks>s2.marks){
        cout<<"first student has a higer score";
    }else if(s1.marks<s2.marks){
        cout<<"second student has a higer score";
    }else{
        cout<<"both have equal marks";
    }
}

int main(){
    College s1(92);
    College s2(98);
    compareMarks(s1,s2);
    return 0;
}



