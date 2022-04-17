// basic of struct
#include<iostream>
using namespace std;
// a struct 
struct Person
{
    char name[50];
    int age;
    float Salary;
};


int main() {
    Person p1;
    cout<<"Enter nAME : ";
    cin.get(p1.name, 50);
    cout<<"Enter Age :";
    cin>>p1.age;
    cout<<"enter salaRy ";
    cin>>p1.Salary;

    // Display Information
    cout<<"Dispalying Data You Enter \n " <<endl;
    cout<<"Name : "<<p1.name <<endl;
    cout<<"Age : "<<p1.age <<endl;
    cout<<"Salary : "<<p1.Salary <<endl;
    return 0;
}