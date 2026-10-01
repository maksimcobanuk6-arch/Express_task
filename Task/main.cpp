#include "Controller.h"
#include <Windows.h>
int main() {
    SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
    Controller app;
    app.run();
    return 0;
}