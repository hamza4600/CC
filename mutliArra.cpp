// Multi dimensional Array
#include<iostream>
using namespace std;

int main() {
    int test[3][2]={
        {1,2},
        {10,20},
        {100,200}
    };
    // Nested Loop For all elemenst 
    for(int i=0;i<=3;i++){
        for(int j=0; j<=2;j++){
            cout<<"Result "<<i<< "] ["<<j<<" ] = "<<test[i][j]<<    endl;
        }
    }
    return 0;
}