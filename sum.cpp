// sum of  nth Numbe 
#include<iostream>
using namespace std;

int main() {
    int num , sum;
    sum=0;

    cout<<"Enter the Number: ";
    cin>> num;
    for( int  i=1; i<=num; i++){
        sum+=i;
    }
    cout<<"Sum of Number from start to Number is: "<<sum<<endl;   
    return 0;
}