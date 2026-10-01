#pragma once
class Strategy {
public:
    virtual double getFee(double amount) = 0;
    virtual ~Strategy() = default; // деструктор
};
class NormalFee : public Strategy {
public:
    double getFee(double amount) override;
};
class VIPFee : public Strategy {
public:
    double getFee(double amount) override;
};