//  dispaly memory adress of array
#include<iostream>
using namespace std;

int main() {
    float arr[10];
    float *point;
    cout<<"Displaying Address of arry"<<endl;
    for( int i=0; i<=10; i++){
        cout<<"Adrees of "<<i <<" "<< &arr[i] <<endl;
    }
    point=arr;
    return 0;
}
