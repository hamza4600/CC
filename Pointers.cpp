// Pointers 
#include<iostream>
using namespace std;

int main() {
    int Numbers=4522;
    int* pointer;
    // Store address
    pointer=&Numbers;
    cout<<"Varible is "<<Numbers<<endl;
    cout<<"Meemory address of varible "<<&Numbers<<endl;
    // Now Pointer 
    cout<<"Pointer varible "<<pointer<<endl;
    cout<<"Content of Pointer address is (*pointer) " <<*pointer<<endl;
    return 0;
}