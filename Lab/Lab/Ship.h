#ifndef SHIP_H
#define SHIP_H

#include "Transport.h"

//����� "�������"
class Ship : public Transport {
	int Displacement; //�������������

	//��� �������
	enum Type {
		LINER, //������
		TOWBOAT, //������
		TANKER //������
	};

	Type T;

public:
    void In_Data(ifstream& ifst); //������� ����� ���������� � �������
    void Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& ofst); //������� ������ ���������� � �������
    Ship() {};
};

#endif // AIRPLANE_H
