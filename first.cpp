#include <iostream>
using namespace std;//using standard namespace

//Example of Strucltural pattern (Factory)

//Existing class(old system)
class OldCharger{
    public:
    void oldCharger(){
      cout<<"Charging with old charger\n";
    }
};

//Adaptor class(converts old interface to new)
class Adaptor{
    private:
    OldCharger oc;

    public:
    void charge(){
        oc.oldCharger();//delegation
    }
};
int main(){
    Adaptor a;
    a.charge();//using adaptor instead of old charger
    return 0;
}

