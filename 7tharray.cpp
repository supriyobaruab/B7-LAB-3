#include <iostream>
using namespace std;

int main() {
    string name[5]     = {"Chal ", "Dal  ", "Alu  ", "Tel  ", "Chini"};
    int items[5];
    int prices[5]      = {80, 30, 60, 20, 120};
    int salesprice[5]  = {100, 40, 80, 30, 150};
    int profit, profit_day = 0, profit_week = 0;

    for (int j = 1; j <= 7; j++) {
        cout << "Calculation of day " << j << endl;
        profit_day = 0;

        for (int i = 0; i < 5; i++) {
            cout << "Amount of " << name[i] << " (in kg): ";
            cin >> items[i];
            profit = (salesprice[i] - prices[i]) * items[i];
            profit_day += profit;
        }

        cout << "Total profit of the day: " << profit_day << endl;
        profit_week += profit_day; 
    }

    cout << "Total profit of the week: " << profit_week << endl;
    return 0;
}
