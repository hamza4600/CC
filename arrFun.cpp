// Pass array Ina funtin
#include<iostream>
using namespace std;

// declear  a fuinction
void display(int man[5]) {
    cout<<"Disaplying The Item in array"<<endl;
    for(int p=0; p<=5; p++){
        cout<<" Items In array "<< p+1 <<": "<<man[p]<<endl;
    }
}


int main() {
    int pap[5]={96,45,26,698,236};
    display(pap);
    return 0;
}
