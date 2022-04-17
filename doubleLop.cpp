// nexted Loops Loop will skip Number 3 Iteration
#include <iostream>
using namespace std;

int main() {
    int number;
    int sum=0;

    // first Loop
    for(int i=1; i<=5; i++){
        for(int j=1; j<=3; j++) {
            if(i==3) {
                break;
            }
            cout<<" i= "<< i <<" j= "<< j <<endl;
        }
    }
        return 0;
}