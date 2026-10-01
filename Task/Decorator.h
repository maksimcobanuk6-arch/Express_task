#pragma once
#include <string>
using namespace std;
class DataProccessor {
public:
    virtual string procces(double val);
    virtual ~DataProccessor() = default;
};

class CryptoDecorator : public DataProccessor {
private:
    DataProccessor* component;

public:
    CryptoDecorator(DataProccessor* comp);
    string procces(double val) override;
};