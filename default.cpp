// if no arrguments is passed In function
#include<iostream>
using namespace std;
// define default parementer we can also define funtion Hear Insted of Below 
void display(char='*', int=5);

int main() {
    int count=10;
    cout<<"No arrgument passed";
    display();

    cout<<"Both argumnet Passes :";
    display('#',count);
    return 0;
}
void display(char c , int count){
    for(int i=1; i<= count; ++i )
    {
        cout<<c;
    }
    cout<<endl;
}
