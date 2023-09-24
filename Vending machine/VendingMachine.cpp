#include "SnackSlot.h"
#include <iostream>
#include <vector>

using namespace std;

class VendingMachine {
private:
    vector<SnackSlot*> slots;

public:
    VendingMachine(int slotCount) {
        for (int i = 0; i < slotCount; i++) {
            slots.push_back(nullptr);
        }
    }

    int getEmptySlotsCount() {
        int emptySlotsCount = 0;
        for (SnackSlot* slot : slots) {
            if (slot == nullptr || slot->isEmpty()) {
                emptySlotsCount++;
            }
        }
        return emptySlotsCount;
    }

    bool addSlot(SnackSlot* slot) {
        if (getEmptySlotsCount() == 0) {
            return false;
        }

        for (int i = 0; i < slots.size(); i++) {
            if (slots[i] == nullptr || slots[i]->isEmpty()) {
                slots[i] = slot;
                return true;
            }
        }

        return false;
    }

    void removeSlot(SnackSlot* slot) {
        for (int i = 0; i < slots.size(); i++) {
            if (slots[i] == slot) {
                slots[i] = nullptr;
                return;
            }
        }
    }

    ~VendingMachine() {
        for (SnackSlot* slot : slots) {
            delete slot;
        }
    }
};
