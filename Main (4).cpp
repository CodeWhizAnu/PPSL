#include <iostream>
using namespace std;

//Base class vehicle
class vehicle{
    public:
       void Vehicle(){
          cout<<"I am a vehicle"<<endl;
       }
};

//Derived class FourWheeler (inherits from vehicle)
class FourWheeler:public vehicle {
    public:
       void fourWheeler(){
          cout<<"I have a four wheels"<<endl;
       }
};

//Derived class Car(inherits from FourWheeler)
class car:public FourWheeler{
    public:
       void Car(){
          cout<<"I am a car"<<endl;
       }
};

int main(){
    //Create an object of class Car 
    car myCar;
    
    //Calling methods of car,fourWheeler,and vehicle through car object 
    myCar.Car();
    myCar.fourWheeler();
    myCar.Vehicle();
    
    return 0;
}