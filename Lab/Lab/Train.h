#ifndef TRAIN_H
#define TRAIN_H

#include "Transport.h"

//����� "�����"
class Train : public Transport {
    int �ars_amount; //����� �������
public:
    void In_Data(ifstream& ifst); //������� ����� ���������� � ������
    void Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& ofst); //������� ������ ���������� � ������
    Train() {};
};

#endif // SPHERE_H
