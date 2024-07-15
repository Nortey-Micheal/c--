#include <iostream>
#include <cmath>

using namespace std;

float GetNumber(string position) {
    float number;

    cout << "Please enter the " << position << " number : ";
    cin >> number;

    return number;
}

bool isSymbolValid(string symbol) {
    if (symbol == "-" || symbol == "+" || symbol == "/"
     || symbol == "*" || symbol == "^" || symbol == "%") {
       return true;
    } else {
       return false;
    }
}

int main(){

    auto first_num = 0,sec_num = 0;
    float result = 0;
    string symbol;

    first_num = GetNumber("first");

    cout << "Please enter an operator i.e. + - / * % ^ : ";
    cin >> symbol;

    sec_num = GetNumber("second");

    if (isSymbolValid(symbol)) {
        if (symbol == "+"){
           result = first_num + sec_num;
        } else if (symbol == "-"){
           result = first_num - sec_num;
        } else if (symbol == "/"){
           result = static_cast<float>(first_num) / sec_num;
        } else if (symbol == "*"){
           result = first_num * sec_num;
        } else if (symbol == "^"){
           result = pow(first_num,sec_num);
        } else if (symbol == "%"){
           result = first_num % sec_num;
        }

        cout << "================================================\n";

        cout << first_num << " " << symbol << " " << sec_num
             << " = " << result <<"\n";
    } else {
        cout << "\nPlease enter a valid operator. eg: * / + - \n";
    }



    return 0;
}
