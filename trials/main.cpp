#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

void Display_Details(string name,int age,string work) {
    int column_wid = 20;

    cout << left;
    //cout << setfill('-');

    cout << setw(column_wid) << name << setw(column_wid) << age << setw(column_wid) << work<<"\n";
}

int main(){
    //cout << "Hello world!" << endl;

    cout << left;
    //cout << setfill('-');

    cout << setw(20) << "NAME" << setw(20) << "AGE" << setw(20) << "WORK"<<"\n \n";

    Display_Details("KOFI ANNANG",56,"SECRETARY");
    Display_Details("NANA AMA",43,"ACTRESS");
    Display_Details("NORTEY MICHAEL",99,"SOFTWARE ENGINEER");

    return 0;
}
