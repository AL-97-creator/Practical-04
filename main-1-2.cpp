#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std;

int main() {
    int num = 10;
    ParkingLot lot1(num);
    string type;
    int i = 0;
    while (i < num) {
        cout << "What class is vehicle " << i + 1 <<
        " (Please answer 'Car', 'Bus' or 'Motorbike'): ";
        cin >> type;
        if (type=="Car") {
            lot1.parkVehicle(new Car(i));
        } else if (type=="Bus") {
            lot1.parkVehicle(new Bus(i));
        } else if (type=="Motorbike") {
            lot1.parkVehicle(new Motorbike(i));
        } else {
            i--;
        }
        i++;
    }
    int removeID;
    cout << "Enter vehicle ID number to be removed: ";
    cin >> removeID;
    lot1.unparkVehicle(removeID);
    return 0;
}