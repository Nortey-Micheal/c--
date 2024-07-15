#include <iostream>

using namespace std;

char GetTempType (string position) {
  char temp_type;

  cout << "Please enter the " << position
       << " temperature type \ni.e 'K' for Kelvin, 'C' for celsius and 'F' for fahrenheit : " ;
  cin >> temp_type;

  return temp_type;
}

bool isTempTypeValid (char tempType) {
  if (tempType == 'C' || tempType == 'c' || tempType == 'F'
      || tempType == 'f' || tempType == 'K' || tempType == 'k' ) {
    return true;
  }else {
    return false;
  }
}

float GetTemp (string position) {
  float temp;

  cout << "Please enter the " << position << " temperature's value : ";
  cin >> temp;

  return temp;
}

int main(){
    float first_temp = 0,new_temp = 0;
    char first_temp_type = '.',sec_temp_type = '.';

    first_temp_type = GetTempType("first");
    cout << "\n";

    if (isTempTypeValid(first_temp_type)) {
      first_temp = GetTemp("first");
      cout << "\n";

      sec_temp_type = GetTempType("second");
    }

    if (first_temp_type == 'K' || first_temp_type == 'k') {

      if (sec_temp_type == 'C' || sec_temp_type == 'c') {

        new_temp = first_temp - 273.15;

      } else if (sec_temp_type == 'F' || sec_temp_type == 'f') {

        new_temp = ((first_temp- 273.15) * 1.8) + 32;

      } else if (sec_temp_type == 'K' || sec_temp_type == 'k') {

        new_temp = first_temp;

      } else {
        cout << "Please enter a valid temperature type.\n";
      }

    }else if (first_temp_type == 'C' || first_temp_type == 'c') {

      if (sec_temp_type == 'C' || sec_temp_type == 'c') {

        new_temp = first_temp;

      } else if (sec_temp_type == 'F' || sec_temp_type == 'f') {

        new_temp = (first_temp * 1.8) + 32;

      } else if (sec_temp_type == 'K' || sec_temp_type == 'k') {

        new_temp = first_temp + 273.15;

      } else {
        cout << "Please enter a valid temperature type.\n";
      }

    }else if (first_temp_type == 'F' || first_temp_type == 'f') {

      if (sec_temp_type == 'F' || sec_temp_type == 'f') {

        new_temp = first_temp;

      } else if (sec_temp_type == 'C' || sec_temp_type == 'c') {

        new_temp = (first_temp - 32) * 0.556;

      } else if (sec_temp_type == 'K' || sec_temp_type == 'k') {

        new_temp = ((first_temp - 32) * 0.556) + 273.15;

      } else {
        cout << "Please enter a valid temperature type.\n";
      }

    } else {
        cout << "Please enter a valid temperature type.\n";
    }


    cout << "\n";

    cout << "===============================================================\n\n";

    cout << first_temp << first_temp_type << " to " << sec_temp_type << " is : "
         << new_temp <<sec_temp_type << endl;

    return 0;
}
