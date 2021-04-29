#include "Transport.h"
#include "Airplane.h"
#include "Train.h"

Transport* Transport::In(ifstream& ifst) {
    Transport* T;
    int K;

    ifst >> K;
    
    if (K == 1) {
        T = new Airplane;
    }
    else if (K == 2) {
        T = new Train;
    }
    else {
        return 0;
    }

    ifst >> T->Speed; //¬водим скорость
    ifst >> T->Distance; //¬водим рассто€ние м/у пунктами

    T->In_Data(ifst);

    return T;
}