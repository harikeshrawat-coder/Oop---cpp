#include <iostream>
using namespace std;//using standard namespace

//Object Diagram Representation

class Student{
    public:
    string name;
    int roll;

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
    }
};

int main(){
    Student s1;
    Student s2;

    s1.name = "Harkesh";
    s1.roll = 101;

    s2.name = "Bhawana";
    s2.roll = 102;

    s1.display();
    s2.display();

    return 0;
}
