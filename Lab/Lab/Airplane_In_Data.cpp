#include "Airplane.h"

void Airplane::In_Data(ifstream& ifst) {
    ifst >> Flight_range; //—читываем дальность полета
    ifst >> Load_capacity; //—читываем грузоподъемность
}