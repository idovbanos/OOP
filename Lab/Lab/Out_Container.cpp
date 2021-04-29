#include "Container.h"

void Container::Out(ofstream& ofst) {
    ofst << "Container contains " << Len
        << " elements." << endl << endl;

    Node* Temp = Head;

    for (int i = 0; i < Len; i++) {
        ofst << i << ": ";
        Temp->Cont->Out_Data(Temp->Cont->Get_Speed(), Temp->Cont->Get_Distance(), ofst);

        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}