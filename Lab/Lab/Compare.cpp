#include "Transport.h"

bool Transport::Compare(Transport& Other) {
    return Transport_Travel_time(Speed, Distance) > Other.Transport_Travel_time(Other.Get_Speed(), Other.Get_Distance());
}
