#include <iostream>
#include <ctime>
#include <string>
#include <unistd.h>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std;

int main() {
    int num = 10;
    ParkingLot lot1(num);
    string vehicleType;
    for (int i=0; i<num;i++) {
        cout<< "What class is vehicle: " <<i+1<<
        "(Please answer 'Car', 'Bus' or 'Motorbike') ";
        cin>>vehicleType;
        if (vehicleType=="Car") {
            lot1.parkVehicle(new Car(i));
        } else if (vehicleType=="Bus") {
            lot1.parkVehicle(new Bus(i));
        } else if (vehicleType=="Motorbike") {
            lot1.parkVehicle(new Motorbike(i));
        } else {
            i--;
        }
    }
    sleep(15);
    cout<<lot1.countOverstayingVehicles(15) << endl;
    return 0;
}