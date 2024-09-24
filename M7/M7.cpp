#include <iostream>
#include <windows.h>
using namespace std;

struct MonthlyBudget {
    double housing;
    double utilities;
    double household_expenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double misc;
};

void placeCursor(HANDLE, int, int);
void displayPrompts(HANDLE);
void getUserInput(HANDLE, MonthlyBudget&);
void displayData(HANDLE, const MonthlyBudget&, const MonthlyBudget&);

int main() {
    MonthlyBudget budget = { 1000, 200, 63, 52, 250, 40, 125, 130, 80, 50 };
    MonthlyBudget actual = {};

    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

    displayPrompts(screen);
    getUserInput(screen, actual);
    displayData(screen, budget, actual);

    return 0;
}

void placeCursor(HANDLE screen, int row, int col) {
    COORD position{};
    position.Y = row;
    position.X = col;
    SetConsoleCursorPosition(screen, position);
}

// DISPLAY PROMPT
void displayPrompts(HANDLE screen) {
    placeCursor(screen, 3, 0);
    cout << "--Entry Form--";
    placeCursor(screen, 5, 0);
    cout << "Category            Budgeted ($)     Actual ($)   Difference ($)";
    placeCursor(screen, 6, 0);
    cout << "-------------------------------------------------------------";
    placeCursor(screen, 7, 0);
    cout << "Housing                 $1000.00";
    placeCursor(screen, 8, 0);
    cout << "Utilities               $200.00";
    placeCursor(screen, 9, 0);
    cout << "Household Expenses      $63.00";
    placeCursor(screen, 10, 0);
    cout << "Transportation          $52.00";
    placeCursor(screen, 11, 0);
    cout << "Food                    $250.00";
    placeCursor(screen, 12, 0);
    cout << "Medical                 $40.00";
    placeCursor(screen, 13, 0);
    cout << "Insurance               $125.00";
    placeCursor(screen, 14, 0);
    cout << "Entertainment           $130.00";
    placeCursor(screen, 15, 0);
    cout << "Clothing                $80.00";
    placeCursor(screen, 16, 0);
    cout << "Miscellaneous           $50.00";
}

void getUserInput(HANDLE screen, MonthlyBudget& data) {
    placeCursor(screen, 7, 40);
    cin >> data.housing;
    placeCursor(screen, 8, 40);
    cin >> data.utilities;
    placeCursor(screen, 9, 40);
    cin >> data.household_expenses;
    placeCursor(screen, 10, 40);
    cin >> data.transportation;
    placeCursor(screen, 11, 40);
    cin >> data.food;
    placeCursor(screen, 12, 40);
    cin >> data.medical;
    placeCursor(screen, 13, 40);
    cin >> data.insurance;
    placeCursor(screen, 14, 40);
    cin >> data.entertainment;
    placeCursor(screen, 15, 40);
    cin >> data.clothing;
    placeCursor(screen, 16, 40);
    cin >> data.misc;
}

void displayData(HANDLE screen, const MonthlyBudget& budget, const MonthlyBudget& actual) {
    placeCursor(screen, 7, 40);
    cout << actual.housing;
    placeCursor(screen, 8, 40);
    cout << actual.utilities;
    placeCursor(screen, 9, 40);
    cout << actual.household_expenses;
    placeCursor(screen, 10, 40);
    cout << actual.transportation;
    placeCursor(screen, 11, 40);
    cout << actual.food;
    placeCursor(screen, 12, 40);
    cout << actual.medical;
    placeCursor(screen, 13, 40);
    cout << actual.insurance;
    placeCursor(screen, 14, 40);
    cout << actual.entertainment;
    placeCursor(screen, 15, 40);
    cout << actual.clothing;
    placeCursor(screen, 16, 40);
    cout << actual.misc;

//DIFFERENCE
    placeCursor(screen, 7, 50);
    cout <<"$" <<actual.housing - budget.housing;
    placeCursor(screen, 8, 50);
    cout << "$" << actual.utilities - budget.utilities;
    placeCursor(screen, 9, 50);
    cout << "$" << actual.household_expenses - budget.household_expenses;
    placeCursor(screen, 10, 50);
    cout << "$" << actual.transportation - budget.transportation;
    placeCursor(screen, 11, 50);
    cout << "$" << actual.food - budget.food;
    placeCursor(screen, 12, 50);
    cout << "$" << actual.medical - budget.medical;
    placeCursor(screen, 13, 50);
    cout << "$" << actual.insurance - budget.insurance;
    placeCursor(screen, 14, 50);
    cout << "$" << actual.entertainment - budget.entertainment;
    placeCursor(screen, 15, 50);
    cout << "$" << actual.clothing - budget.clothing;
    placeCursor(screen, 16, 50);
    cout << "$" << actual.misc - budget.misc;
}