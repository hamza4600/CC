// Break a loop
#include<iostream>
using namespace std;

int main() {
    for(int i=1; 1<=10; i++){
        if(i==6){
            break;
        }
        cout<<i<<" ";
    }
    return 0;
}