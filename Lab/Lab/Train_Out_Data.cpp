#include "Train.h"

void Train::Out_Data(int Speed, int Distance, ofstream& ofst) {
    ofst << "It's a Train with Cars amount: " << Ñars_amount << endl;
    ofst << "Its Speed is " << Speed << " kilometers/hour" << endl;
    ofst << "And Distance is " << Distance << " kilometers" << endl;
}