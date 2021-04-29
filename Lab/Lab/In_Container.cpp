#include "Container.h"
#include "Transport.h"

void Container::In(ifstream& ifst) {
    Node* Temp;

    while (!ifst.eof()) {
        Temp = new Node(); //������� ����� ����
        //�������������� ����� ����
        Temp->Next = NULL;
        Temp->Prev = NULL;


        if (!Len) { //������ 1-�� ��������
            if ((Head->Cont = Transport::In(ifst))) {
                Tail = Head;
                Len++;
            }
        }
        else { //������ ����������� ���������
            if ((Temp->Cont = Transport::In(ifst))) {
                Tail->Next = Temp;
                Temp->Prev = Tail;
                Tail = Temp;
                Len++;
            }
        }
    }
}