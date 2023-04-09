#include <iostream>
#include <ctime>
#include <string>
#include <unistd.h>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main(){
    int numV;
    string type;
    int currentID=0;
    cout<<"How many vehicles are there? ";
    cin>>numV;
    Vehicle* vehicleArray[numV];
    while (currentID < numV) {
        cout<<"What class is vehicle "<<currentID + 1<<
        " (Please answer 'Car', 'Bus' or 'Motorbike'): ";
        cin >> type;
        if (type == "Car") {
            vehicleArray[currentID]=new Car(currentID);
            currentID++;
        } else if (type=="Bus") {
            vehicleArray[currentID]=new Bus(currentID);
            currentID++;
        } else if (type=="Motorbike") {
            vehicleArray[currentID]=new Motorbike(currentID);
            currentID++;
        }
    }

    sleep(3);

    for (int i = 0; i < numV; i++) {
        cout<<(vehicleArray[i])->getParkingDuration()<<", ";
    }
    cout<<endl;

    return 0;
}
