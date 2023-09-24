#pragma once
class SnackSlot {
private:
    int capacity;
    int quantity;

public:
    SnackSlot(int capacity);
    bool isEmpty();
    bool isFull();
};