#include "Model.h"
#include "Decorator.h"
using namespace std;
void Model::addObserver(Observer* o) {
    observers.push_back(o);
}
void Model::setStrategy(Strategy* s) {
    strategy = s;
}
void Model::doTransaction(double amount) {
    if (!strategy) return;
    // 1. Стратегія
    double total = amount + strategy->getFee(amount);
    // 2. Декоратор
    DataProccessor base;
    CryptoDecorator encrypted(&base);
    string result = encrypted.procces(total);
	// спостерігачі
    for (auto obs : observers) {
        obs->update(result);
    }
}