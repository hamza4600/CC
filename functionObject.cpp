// Pass Object in Function
#include<iostream>
using namespace std;

class Student {
    public :
     double marks;
    // constructor for mark
    Student(double m) {
        marks =m;
    }
};
// pAss Object t functio 
void calcAvarge(Student s1 , Student s2) {
    double average= (s1.marks + s2.marks)/2;
    cout<<" Avaerage Marks Are : "<<average <<endl;
}


int main() {
    Student ali(500),hassan(950);
    // ?call function
    calcAvarge(ali,hassan);
    return 0;
}