#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <ctime>

using namespace std;
class Car: public Vehicle {
    public:
        Car(int ID);
        int getParkingDuration();
        };

#endif
