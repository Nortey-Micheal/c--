#include <iostream>
using namespace std;

int main() {
  int Int1;
  int Int2;
  int Int3;
  int Int4;
  cout << "Please enter first number : ";
  cin >> Int1;
  cout << "Please enter second number : ";
  cin >> Int2;
  cout << "Please enter third number : ";
  cin >> Int3;
  if (Int2 > Int1) {
    Int4 = Int1;
    Int1 = Int2;
    Int2 = Int4;
  }
  if (Int3 > Int2) {
    Int4 = Int2;
    Int2 = Int3;
    Int3 = Int4;
  }
  if (Int2 > Int1) {
    Int4 = Int1;
    Int1 = Int2;
    Int2 = Int4;
  }
  cout << Int1<< " , "<< Int2<< " , "<< Int3;
  return 0;
}
