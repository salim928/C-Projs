#include <iostream>
#include <memory>
#include "Car.h"

using namespace std;

int main()
{
    auto myCar = make_unique<Car>("red",4);


    cout <<"The color of the car is :"<<myCar->getColor()<<endl;
    cout << "The number of door: "<<myCar->getNumDoors()<<endl;
    return 0;
}
