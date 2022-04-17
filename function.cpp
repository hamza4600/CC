// declearing  Basic function in cpp
#include <iostream>
using namespace std;

// function
void greet() {
    cout<<"Good Morning\n";
}
// parameter in a functions
void sum(int num1,int num2){
    cout<<"Sum of Numbers is "<<num1+num2;
}
// 
int multply(int a,int b){
    return(a*b);
}
int main() {
    greet();
    // pass argumnets in function
   sum(10,50);
   cout<<"\n";
    // datatype return 

    cout<<"Multiple of Number is \n"<<multply(10,5);

    return 0;
} 