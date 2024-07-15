#include <iostream>

using namespace std;

int main(){

    string name;
    int age,birth_year,current_year = 2024;

    cout << "Please enter your name : ";
    cin >> name;

    cout << "Please enter your age : ";
    cin >> age;

    birth_year = current_year - age;

    cout << "Hello! " << name << "\nIt seems like you were born in the year "
         << birth_year << " and you are " << age <<" years old.";

    return 0;
}
