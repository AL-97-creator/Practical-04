#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

using namespace std;

int ParkingLot::getCount() {
    return curVehicles;
}

ParkingLot::ParkingLot(int maxVehicles) {
    this -> maxVehicles=maxVehicles;
    curVehicles=0;
    vehicles= new Vehicle*[maxVehicles];
    status = new int[maxVehicles];
    for (int i=0;i<maxVehicles;i++) {
        status[i] = 0;
    }
}

bool ParkingLot::parkVehicle(Vehicle* newVehicle) {
    for (int i = 0; i < maxVehicles; i++) {
        if (status[i] == 0) {
            vehicles[i] = newVehicle;
            status[i] = 1;
            curVehicles++;
            return 1;
        }
    }
    cout << "The lot is full\n";
    return 0;
}

bool ParkingLot::unparkVehicle(int ID) {
    for (int i = 0; i < maxVehicles; i++) {
        if (vehicles[i]->getID() == ID) {
            vehicles[i] = new Vehicle[0];
            status[i] = 0;
            curVehicles--;
            return 1;
        }
    }
    cout << "The vehicle is not in the lot\n";
    return 0;
}


int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int overVehicles=0;
    for (int i = 0; i < maxVehicles; i++) {
        if (vehicles[i]->getParkingDuration()>maxParkingDuration) {
            overVehicles++;
        }
    }
    return overVehicles;
}
