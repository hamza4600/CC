// if statement in C++ we can also use id satement in if statemnet
#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter a Number: ";
    cin>>number;
    if(number>0)
        cout<<"Number is positive"<<endl;
    else if(number<0)
        cout<<"Number is negative"<<endl;
    else
        cout<<"Number is zero"<<endl;
    cout<<"This statement will always run at \n End of Program"<<endl;
    return 0;

}
