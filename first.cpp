#include <iostream>
#include <string>
using namespace std;//using standard namespace

//Code of Designe For Reuse
class Person{
    protected ://access specifier
    string name ;

    public:
    void setName(string n){
        name = n;
    }
    string getName() const { return name; }
};

void displayName(Person& p){
    cout<<"Name:"<<p.getName()<<endl;
};
class Student:public Person{
    private://access specipier
    int roll;

    public:
    void setRoll(int r){
        roll = r;
    };
    
    void displayStudent(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll Number:"<<roll<<endl;
    }
};
 

int main(){
    Student s;

    s.setName("Harkesh");
    s.setRoll(21);

    s.displayStudent();
    return 0;
}    