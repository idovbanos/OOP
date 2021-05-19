#include "Ship.h"

void Ship::In_Data(ifstream& ifst) {
    ifst >> Displacement; //—читываем водоизмещение

    string Temp = "";

    ifst >> Temp;

    if (Temp == "Liner") {
        T = LINER;
    }
    else if (Temp == "Towboat") {
        T = TOWBOAT;
    }
    else if (Temp == "Tanker") {
        T = TANKER;
    }
}