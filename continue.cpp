// contiue in Loop and jum in Loop
#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=10; i++) {
        if(i==6) {
            cout<<"Number 6 is skipped "<<endl;
            continue;
        }
        cout<<i <<endl;
    }
    return 0;
}