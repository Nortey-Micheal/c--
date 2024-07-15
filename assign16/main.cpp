#include <iostream>
using namespace std;

int main() {
   double height;
   double base;
   double area;
   cout << "Please enter the base of the triangle : ";
   cin >> base;
   cout << "Please enter the height of the triangle : ";
   cin >> height;
   area = 0.5 * height * base;
   cout << "The area of the base is : "<< area ;
   return 0;
}
