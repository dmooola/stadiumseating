//stadium seating program. Oladamola Ola-Buraimo. 03/4/24. This code will take user input for 3 types of tickets sold, and display income generated.
#include <iostream>
#include <iomanip>

using namespace std;

double calculateIncome(int classATickets, int classBTickets, int classCTickets) {
    const double classAPrice = 15.0;
    const double classBPrice = 12.0;
    const double classCPrice = 9.0;

    double totalIncome = (classATickets * classAPrice) + (classBTickets * classBPrice) + (classCTickets * classCPrice);

    return totalIncome;
}

int main() {
    int classATickets, classBTickets, classCTickets;

    cout << "Enter the number of Class A tickets sold: ";
    cin >> classATickets;

    cout << "Enter the number of Class B tickets sold: ";
    cin >> classBTickets;

    cout << "Enter the number of Class C tickets sold: ";
    cin >> classCTickets;

    double totalIncome = calculateIncome(classATickets, classBTickets, classCTickets);

    cout << fixed << setprecision(2);
    cout << "Total income generated from ticket sales: $" << totalIncome << endl;

    return 0;
}
