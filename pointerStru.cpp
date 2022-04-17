// Pointer and Struct
// In this Program we have used Pointers Inted of Varible s 
#include<iostream>
using namespace std;
struct Hamza
{
    char name[50];
    char address[50];
    int age;
};

int main() {
    //  Creating varibles 
    Hamza *point , da;
    point=&da;

    cout<<"Enter your Name: ";
    cin>>(*point).name;
    cout<<"Enter your Address: ";
    cin>>(*point).address;
    cout<<"Enter your Age: ";
    cin>>(*point).age;
// display data 
    cout<<"Data You have enter \n";
    cout<<"Name"<<(*point).name <<"\naddress"<<(*point).address<<"\nAge"<<(*point).address;
    return 0;
}
