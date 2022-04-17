// Sum of Number using while Loop  i fwe enter negative Number Loop will not be executed13
#include<iostream>
using namespace std;

int main(){
    int number;
    int sum=0;

    cout<<"Enter the Number: ";
    cin>>number;
    while(number>=0) {
        sum+=number;
        cout<<"Enter the Number: ";
        cin>>number;
    }
    return 0;
}