#include <iostream>
#include <ctime>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(int ID) {
    this -> ID = ID+1;
    timeOfEntry = time(0);}

Vehicle::Vehicle() {
    ID = 0;
    timeOfEntry = time(0);}

int Vehicle::getID() {
    return ID;}

void Vehicle::setID(int ID) {
    this -> ID = ID;}

int Vehicle::getParkingDuration() {
    return -1;}
