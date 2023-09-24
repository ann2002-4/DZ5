#pragma once
#include <iostream>
#include <vector>

using namespace std;

class VendingMachine {
private:
    vector<SnackSlot*> slots;

public:
    VendingMachine(int slotCount);
        int getEmptySlotsCount();
        int emptySlotsCount;
        
        bool addSlot(SnackSlot* slot);
        void removeSlot(SnackSlot* slot);
};
