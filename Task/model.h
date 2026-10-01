#pragma once
#include <vector>
#include "Observer.h"
#include "Strategy.h"
class Model {
private:
    std::vector<Observer*> observers;
    Strategy* strategy = nullptr;
public:
    void addObserver(Observer* o);
    void setStrategy(Strategy* s);
    void doTransaction(double amount);
};