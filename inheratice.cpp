// inhearatice conept
#include <iostream>
using namespace std;
// bsse class
class Animal{
    public:
     void  eat() {
         cout<<"I Can eat"<<endl;
     }
     void sleep() {
         cout<<"I can also sleep"<<endl;
     }
};
// derived class
class Dog: public Animal {
    public:
     void bark() {
         cout<<" I can bark and make Dange"<<endl;
     }
};

int main() {
    // Creat a Object
    Dog dog1;
    dog1.eat();
    dog1.sleep();
    dog1.bark();
    return 0;
}