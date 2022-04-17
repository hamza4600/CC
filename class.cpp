// basic class in cpp
#include<iostream>
using namespace std;

class Room{
    
    public:
     double lenght;
     double breath;
     double height;

    double calcuArea() {
        return lenght*breath;
    }
    double calcuVolum() {
        return lenght*breath*height;
    }
};

int main() {
    // Creating a Object 
    Room room1;
    room1.lenght=45.6;
    room1.breath=98.6;
    room1.height=55.6;
    //  dispaly area
    cout<<"\n Area of Room "<< room1.calcuArea()<<endl;
    cout<<" \nVolum of Room "<< room1.calcuVolum()<<endl;

}