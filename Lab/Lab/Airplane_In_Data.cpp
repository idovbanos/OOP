#include "Airplane.h"

void Airplane::In_Data(ifstream& ifst) {
    ifst >> Flight_range; //��������� ��������� ������
    ifst >> Load_capacity; //��������� ����������������
}