#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "Transport.h"

//����� "�������"
class Airplane : public Transport {
    int Flight_range; //��������� ������
    int Load_capacity; //����������������
public:
    void In_Data(ifstream& ifst); //������� ����� ���������� � ��������
    void Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& ofst); //������� ������ ���������� � ��������
    Airplane() {};
};

#endif // AIRPLANE_H
