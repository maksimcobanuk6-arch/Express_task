#include "Decorator.h"
using namespace std;
string DataProccessor::procces(double val) { // метод зняття коштів
    return "Сума до зняття: " + to_string(val);
}
CryptoDecorator::CryptoDecorator(DataProccessor* comp) : component(comp) {}
string CryptoDecorator::procces(double val) {
    return component->procces(val) + " | [Зашифровано AES-256]";
}