#include "Observer.h"
#include <iostream>
using namespace std;
void Logger::update(std::string info) {
    std::cout << "[Вхід в систему] " << info << std::endl;
}