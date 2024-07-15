#include <iostream>

using namespace std;

float Get_number(string cardinal) {
   float number;
   cout<<"Please enter the "<<cardinal<<" number : ";
   cin >>number;

   return number;
}

void Sort_numbers(float num1,float num2,float num3,float num4) {
   float temp;

   if(num1 > num2) {
      temp = num2;
      num2 = num1;
      num1 = temp;
   }

   if(num2 > num3) {
      temp = num3;
      num3 = num2;
      num2 = temp;
   }

   if(num3 > num4) {
      temp = num4;
      num4 = num3;
      num3 = temp;
   }

   if(num1 > num2) {
      temp = num2;
      num2 = num1;
      num1 = temp;
   }

   if(num2 > num3) {
      temp = num3;
      num3 = num2;
      num2 = temp;
   }

   if(num1 > num2) {
      temp = num2;
      num2 = num1;
      num1 = temp;
   }

   cout << "The numbers entered will be arranged in the ascending order as : "
        << num1<<" , "<< num2 <<" , "<< num3 <<" , "<<num4<<endl;
}



int main(){
    float num1 = Get_number("first");
    float num2 = Get_number("second");
    float num3 = Get_number("third");
    float num4 = Get_number("fourth");
    cout<<"\n";
    Sort_numbers(num1,num2,num3,num4);

    return 0;
}
