#include "Controller.h"
#include "Observer.h"
#include "Strategy.h"
#include <iostream>
using namespace std;
void Controller::run() {
    Logger myLogger;
    model.addObserver(&myLogger);
    NormalFee normal;
    VIPFee vip;
    int choice = 0;
    double amount = 0;
    // Простий цикл меню
    while (choice != 3) {
        cout << "\n--- МЕНЮ ---\n";
        cout << "1. Звичайна транзакція (Комісія 5%)\n";
        cout << "2. VIP транзакція (Без комісії)максим лох\n";
        cout << "3. Вийти\n";
        cout << "Ваш вибір: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();// геть помилку
			cin.ignore(10000, '\n');// з пам'яті видаляємо залишки вводу
            cout << "Помилка! Вводьте ТІЛЬКИ цифри.\n";
            continue;//
        }
        if (choice == 3) {
            break; // Вихід з програми
        }
        cout << "Введіть суму: ";
        cin >> amount;
        // Вибір стратегії залежно від пункту меню
        if (choice == 1) {
            model.setStrategy(&normal);
            model.doTransaction(amount);
        }
        else if (choice == 2) {
            model.setStrategy(&vip);
            model.doTransaction(amount);
        }
    }
}