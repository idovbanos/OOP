#ifndef CONTAINER_H
#define CONTAINER_H

#include "Node.h"

//���������
class Container {
    Node* Head, * Tail; //��������� �� "������" � "�����" ����������
    int Len; //����������� ����������
public:
    void In(ifstream& ifst); //������� ����� �������� � ���������
    void Out(ofstream& ofst); //������� ������ �������� �� ����������
    void Clear(); //������� �������� ����������
    void Out_Only_Airplane(ofstream& ofst); //������� ������ ������ ���������
    Container(); //�����������
    ~Container() { Clear(); } //����������
};

#endif //CONTAINER_H