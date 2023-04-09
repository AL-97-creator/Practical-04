#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"

class ParkingLot {
    protected:
        int maxVehicles;
        int curVehicles;
        int* status;
    public:
        Vehicle** vehicles;
        int getCount();
        ParkingLot(int maxVehicles);
        bool parkVehicle(Vehicle* newVehicle);
        bool unparkVehicle(int ID);
        int countOverstayingVehicles(int maxParkingDuration);
};
#endif