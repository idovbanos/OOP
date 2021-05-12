#include "Ship.h"

void Ship::Out_Data(int Speed, int Distance, ofstream& ofst) {
    ofst << "It's a Ship with Displacement: " << Displacement << " thousands of tons" << endl;

    ofst << "Its Type is ";

    if (T == LINER) {
        ofst << "Liner";
    }
    else if (T == TOWBOAT) {
        ofst << "Towboat";
    }
    else if (T = TANKER) {
        ofst << "Tanker";
    }

    ofst << endl;

    ofst << "Its Speed is " << Speed << " kilometers/hour" << endl;
    ofst << "And Distance is " << Distance << " kilometers" << endl << endl;
}