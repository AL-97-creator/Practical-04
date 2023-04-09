#include <iostream>
#include <ctime>
#include "Bus.h"
#include "Vehicle.h"

using namespace std;
Bus::Bus(int ID):Vehicle(ID) {}

    int Bus::getParkingDuration(){
        int parkingDuration;
        time_t timeOfDeparture=time(0);
        parkingDuration=(timeOfDeparture-timeOfEntry)*0.75;
        return parkingDuration;
    }