#include <iostream>
using namespace std;
class Box {
    public:
        double length; //Length of a box
        double breadth; //Breath of a box
        double height; // Heigth of a box

        //Member functions declaration
        double getVolume(void);
        void setLength(double len);
        void setBreath(double bre);
        void setHeigth(double hei);
};

//Member functions definitions
double Box::getVolume(void){
    return length * height * breadth;
}

void Box::setLength(double len){
    length = len;
}

void Box::setBreath(double bre){
    breadth = bre;
}

void Box::setHeigth(double hei){
    height = hei;
}

int main() {
    Box Box1; //Declare 2 Boxes of type Box declared above
    Box Box2;
    double volume = 0.0; //Store the volume of the box
    
    //Box 1 specification
    Box1.setLength(6.0);
    Box1.setBreath(7.0);
    Box1.setBreath(5.0);
    
    //Box 2 specificarion
    Box2.setLength(15.0);
    Box2.setBreath(12.0);
    Box2.setHeigth(14.0);

    //Calculate volume 1
    volume = Box1.getVolume();
    cout << "Volume of Box 1: " << volume << endl;

    //Calculate volume 2
    volume = Box2.getVolume();
    cout << "Volume of Box 2: " << volume << endl;
    
    return 0;
}