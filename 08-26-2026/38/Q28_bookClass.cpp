#include<iostream>
using namespace std;
class Book{
    float length,breath,height;
public:
    void takeInputs(){
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter breath: ";
        cin>>breath;
        cout<<"Enter length: ";
        cin>>height;
    }
    void volume(){
        cout<<"The volume is: "<<length*breath*height<<endl;
    }
};

int main(){
    Book obj1,obj2;
    cout<<"----Book 1-----"<<endl;
    obj1.takeInputs();
    obj1.volume();
    cout<<"----Book 2-----"<<endl;
    obj2.takeInputs();
    obj2.volume();
    return 0;
}
