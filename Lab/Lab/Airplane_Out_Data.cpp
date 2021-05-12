#include "Airplane.h"

void Airplane::Out_Data(int Speed, int Distance, ofstream& ofst) {
    ofst << "It's an Airplane with Flight range: " << Flight_range << " kilometers" << endl;
    ofst << "Its Load Capacity is " << Load_capacity << " kilograms" << endl;
    ofst << "Its Speed is " << Speed << " kilometers/hour" << endl;
    ofst << "And Distance is " << Distance << " kilometers" << endl;
}