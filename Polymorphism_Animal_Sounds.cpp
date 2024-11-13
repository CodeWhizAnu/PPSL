#include <iostream>
using namespace std;

class Animal {
public:

virtual void sound() {
cout << "This is a generic animal sound." << endl;
}
};

class Dog : public Animal {
public:
void sound() override { 
cout << "The dog barks." << endl;
}
};

class Cat : public Animal {
public:
void sound() override { 
cout << "The cat meows." << endl;
}
};

void display(int n) {
cout << "Integer: " << n << endl;
}
void display(double d) {
cout << "Double: " << d << endl;
}
int main() {

Animal *animal1 = new Dog();
Animal *animal2 = new Cat();
animal1->sound(); 
animal2->sound(); 

display(5); 
display(3.14); 

delete animal1;
delete animal2;
return 0;
}