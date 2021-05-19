#include "Container.h"

void Container::Out_Only_Airplane(ofstream& ofst) {
    ofst << endl << "Only Airplanes." << endl;

    Node* Temp = Head;

    for (int i = 0; i < Len; i++) {
        ofst << i << ": ";
        Temp->Cont->Out_Only_Airplane(Temp->Cont->Get_Speed(), Temp->Cont->Get_Distance(), ofst);
        
        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}