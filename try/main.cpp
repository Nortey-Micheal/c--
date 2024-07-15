#include <iostream>
#include <iomanip>
#include <ios>

using namespace std;

int main() {
    string item_name;
    int Qty = 0;
    float unit_price = 0,amount_paid = 0,change = 0,total = 0;
    bool isPriceValid = true;

    cout << "Please enter the name of the item : ";
    getline(cin,item_name);

    cout << "Please enter the quantity of items : ";
    cin >> Qty;

    cout << "Please enter the unit price of the items : ";
    cin >> unit_price;

    cout << "Please enter the amount paid : ";
    cin >> amount_paid;

    cout << endl;

    total = Qty * unit_price;

    if (amount_paid >= total) {
       change = amount_paid - total;
       isPriceValid = true;
    } else {
       cout << "Amount paid is lower than the total. Top-up or discard item\n";
       change = amount_paid - total;
       isPriceValid = false;
    }

    if (isPriceValid) {
       cout << left << setprecision(2);
       //cout << setw(30);
       cout << setw(20) << "Items" << setw(20) << "Qty" << setw(20) << "Unit Price" << setw(20) << "Total" << endl;
       cout << setw(20) << item_name << setw(20) << Qty << setw(20) << unit_price << setw(20) << total << endl;
       cout << setw(20) << "Total" << setw(20) << " " << setw(20) << " " << setw(20) << total << endl;
       cout << setw(20) << "Amount Paid" << setw(20) << " " << setw(20) << " " << setw(20) << amount_paid << endl;
       cout << setw(20) << "Change" << setw(20) << " " << setw(20) << " " << setw(20) << change << endl;

    }

    return 0;
}
