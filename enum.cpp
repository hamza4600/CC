// Concept of enumertion 
#include<iostream>
using namespace std;

enum week  { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };


int main() {
    week today;
    today= Wednesday;
    cout<<"Day is "<<today+1;
    return 0;
}
// ?we can also pass defaults values In a enums
