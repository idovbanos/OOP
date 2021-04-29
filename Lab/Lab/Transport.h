#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <fstream>

using namespace std;

class Transport {
    int Speed; //��������
    int Distance; //���������� �/� �������� ����������� � ����������
public:
    int Get_Speed(); //������� ��������� �������� �������� ����������
    int Get_Distance(); //������� ��������� �������� ���������� �/� �������� ����������� � ���������

    static Transport* In(ifstream& ifst); //������� ����� ���������� � ����������
    virtual void In_Data(ifstream& ifst) = 0; //����� ����������� ������� ����� ����������
                                              //� ����������, ��� ����� ���������� ���
                                              //������� ������ ����������� ����������
    virtual void Out_Data(int Speed, int Distance, ofstream& ofst) = 0; //����� ����������� ������� ������ ����������
                                              //� ���������, ��� ����� ���������� ���
                                              //������� ������ ����������� ���������
protected:
    Transport() {};
};

#endif // TRANSPORT_H
