#pragma once
#include "Model.h"
#include "View.h"
class Controller {
private:
    Model model;
    View view;
public:
    void run();
};