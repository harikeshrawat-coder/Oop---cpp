#include <iostream>
#include<string>
using namespace std;//using standard namespace

class LandVehicle{ //First Bsae class
    public:
    void landInfo(){
        cout<<"This is a Landvehicle"<<endl;
    }
};

    class WaterVehicle{ //Secod Base class
     public:
     void waterInfo(){
        cout<<"This is a WaterVehicle"<<endl;
     }

    };
    //Derived class inheriting from both base classes
    class AmphibiousVehicle: public LandVehicle, public WaterVehicle
    {
        public:
        void AmphibiousInfo(){
            cout<<"This is an AmphibiousVehicle"<<endl;
        }
    };
    int main(){
        AmphibiousVehicle obj;

        obj.waterInfo();
        obj.landInfo();
        obj.AmphibiousInfo();

        return 0;
    }






