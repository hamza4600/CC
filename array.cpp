// exercise if array
#include<iostream>
using namespace std;

int mask[5]={10,15,20,25,30};
int main() {
        // change data in index Value of array
    mask[2] = 99;
    for(const int &n :mask){
        cout<<n<<" ";
    }
    // Take input from user and save to array 
    cout<<"\nPrint Data from an arry useing Loop"" ";
    for(int o=0; o<=5; o++) {
        cout<<mask[o]<<" ";
    }
    return 0;
}