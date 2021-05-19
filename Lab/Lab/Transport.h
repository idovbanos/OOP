#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <fstream>

using namespace std;

class Transport {
    int Speed; //��������
    int Distance; //���������� �/� �������� ����������� � ����������
    double Cargo_weight; //����� �����
public:
    int Get_Speed(); //������� ��������� �������� �������� ����������
    int Get_Distance(); //������� ��������� �������� ���������� �/� �������� ����������� � ���������
    double Get_Cargo_weight(); //������� ��������� �������� ����� �����

    static Transport* In(ifstream& ifst); //������� ����� ���������� � ����������
    virtual void In_Data(ifstream& ifst) = 0; //����� ����������� ������� ����� ����������
                                              //� ����������, ��� ����� ���������� ���
                                              //������� ������ ����������� ����������
    virtual void Out_Data(int Speed, int Distance, double Cargo_weight, ofstream& ofst) = 0; //����� ����������� ������� ������ ����������
                                              //� ���������, ��� ����� ���������� ���
                                              //������� ������ ����������� ���������
    double Transport_Travel_time(int Speed, int Distance); //������� �������� ������� ���������� � ����
    bool Compare(Transport& Other); //������� ��������� ������ ����������� ���� 
    virtual void Out_Only_Airplane(int Speed, int Distance, double Cargo_weight, ofstream& ofst); //������� ������ ������ ���������
protected:
    Transport() {};
};

#endif // TRANSPORT_H
