#include <iostream>
#include <vector>
#include "Snack.h"
#include "SnackSlot.h"

using namespace std;

class SnackSlot {
private:
    int capacity;
    int quantity;
    Snack* snack;

public:
    SnackSlot(int capacity) {
        this->capacity = capacity;
        this->quantity = 0;
        this->snack = nullptr;
    }

    bool isEmpty() {
        return quantity == 0;
    }

    bool isFull() {
        return quantity == capacity;
    }

    bool addSnack(Snack* snack) {
        if (isFull()) {
            return false;
        }

        this->snack = snack;
        quantity++;
        return true;
    }

    void removeSnack() {
        snack = nullptr;
        quantity--;
    }
};