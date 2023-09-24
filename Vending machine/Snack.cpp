#include <iostream>
#include <vector>
#include "Snack.h"

using namespace std;


class Snack {
private:
    string name;

public:
    Snack(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }
};