#include <iostream>
using namespace std;
// Base class
class Vehicle {
public:
Vehicle() {
cout << "Vehicle created." << endl;
}
void start() {
cout << "Vehicle has started." << endl;
}
};
// Derived class
class Car : public Vehicle {
public:
Car() {
cout << "Car created." << endl;
}
void honk() {
cout << "Car honking: Beep Beep!" << endl;
}
};
int main() {
// Creating an object of the derived class
Car myCar;
// Accessing base class method
myCar.start(); // Output: Vehicle has started.
// Accessing derived class method
myCar.honk(); // Output: Car honking: Beep Beep!
return 0;
}