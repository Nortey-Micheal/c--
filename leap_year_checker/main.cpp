#include <iostream>


using namespace std;

int Recieve_year() {
   int year;
   cout << "Please enter a year to check : ";
   cin >> year;
   return year;
}

bool isValidYear(int year) {
   if (year != 0000) {
       return true;
   } else {
       return false;
   }
}

string Check_leap_year(int year) {
   string message;
   if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
       message = "Congrats! Entered year is a leap year";
   } else {
       message = "Sorry! Entered year is not a recognised leap year";
   }
   return message;
}

void Display_message(string message){
   cout << message<<endl;
}

int main()
{
    int year = Recieve_year();
    while(isValidYear(year)) {
       string message;
       if(to_string(year).length() == 4) {
         message = Check_leap_year(year);
         Display_message(message);
       } else{
         message = "Invalid year entered";
         Display_message(message);
       }
       year = Recieve_year();
    }
    return 0;
}
