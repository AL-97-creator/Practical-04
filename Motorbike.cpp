#include <iostream>
#include <ctime>
#include "Motorbike.h"
#include "Vehicle.h"

using namespace std;
Motorbike::Motorbike(int ID):Vehicle(ID) {}

    int Motorbike::getParkingDuration(){
        int parkingDuration;
        time_t timeOfDeparture=time(0);
        parkingDuration=(timeOfDeparture-timeOfEntry)*0.85;
        return parkingDuration;
    }