#include "Transport.h"
#include "Airplane.h"
#include "Train.h"
#include "Ship.h"

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
    else if (K == 3) {
        T = new Ship;
    }
    else {
        return 0;
    }

    ifst >> T->Speed; //������ ��������
    ifst >> T->Distance; //������ ���������� �/� ��������
    ifst >> T->Cargo_weight; //������ ����� �����

    T->In_Data(ifst);

    return T;
}