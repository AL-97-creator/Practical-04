#include <iostream>
#include <ctime>
#include "Car.h"
#include "Vehicle.h"

using namespace std;

Car::Car(int ID):Vehicle(ID){}

int Car::getParkingDuration(){
    int parkingDuration;
    time_t timeOfDeparture=time(0);
    parkingDuration=(timeOfDeparture-timeOfEntry)*0.9;
    return parkingDuration;
}
