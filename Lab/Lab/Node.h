#ifndef NODE_H
#define NODE_H

#include "Transport.h"

//���� ����������
struct Node {
    Node* Next, * Prev; //��������� �� ��������� � ���������� �������� ����������
    Transport* Cont; //��������� �� ���������
};

#endif //NODE_H