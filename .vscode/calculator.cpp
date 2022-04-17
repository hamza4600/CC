// Basic claculator in cpp
#include <iostream>
using namespace std;

int main() {
    char operter;
    float num1, num2;
    cout<<"Selecte the Opertor ( + , - , * , / ):  ";
    cin>>operter;
    cout<<" Enter Two Numbers : "<<endl;
    cin>>num1>>num2;
    switch (operter)
    {
    case '+':
        cout<<num1 <<" + " <<num2 <<" = " <<num1+num2;
        break;
    case '-':
        cout<<num1 <<" = " <<num2 <<" = " <<num1-num2;
        break;        
    case '*':
        cout<<num1 <<" * " <<num2 <<" = " <<num1*num2;
        break;
    case '/':
        cout<<num1 <<" / " <<num2 <<" = " <<num1/num2;
        break;    
    default:
        cout<<"Correct operator was not selected "<<endl;
        break;
    }
    return 0;
}