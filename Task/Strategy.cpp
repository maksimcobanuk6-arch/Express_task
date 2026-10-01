#include "Strategy.h"

double NormalFee::getFee(double amount) {
    return amount * 0.10; // буде комісія 5 процентіків
}
double VIPFee::getFee(double amount) {
    return 0.0; // не буде комісій
}