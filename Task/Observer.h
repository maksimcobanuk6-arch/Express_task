#pragma once
#include <string>
class Observer {
public:
    virtual void update(std::string info) = 0;
    virtual ~Observer() = default;
};
class Logger : public Observer {
public:
    void update(std::string info) override;
};