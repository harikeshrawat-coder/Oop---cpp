#include <iostream>
#include<string>
using namespace std;//using standard namespace
class Account { //Base classs
    public: //Access modifier/specifier
    float salary = 65000;

};
class Programmer: public Account {
    public:
    float bonus = 5500;
};
int main(void) {
    Programmer p1;
    cout<<"salary :"<<p1.salary<<endl;
    cout<<"bonus:"<<p1.bonus<<endl;
    return 0;
}



