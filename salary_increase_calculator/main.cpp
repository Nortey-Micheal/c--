#include <iostream>

using namespace std;

float Recieve_salary() {
   float current_salary;
   cout << "Please enter your current salary : ";
   cin >> current_salary;

   return current_salary;
}

float Calculate_salary_increase(float current_salary) {
   float salary_increase;
   salary_increase = current_salary * 0.08;

   return salary_increase;
}

float Calculate_increased_salary(float current_salary,float salary_increase) {
   float increased_salary;
   increased_salary = current_salary + salary_increase;

   return increased_salary;
}

float Calculate_faculty_payroll_before(float facult_payroll_before,float current_salary) {
   facult_payroll_before += current_salary;

   return facult_payroll_before;
}

float Calculate_faculty_payroll_after(float facult_payroll_after,float increased_salary) {
   facult_payroll_after += increased_salary;

   return facult_payroll_after;
}

float Calculate_total_pay_increase(float total_pay_increase,float salary_increase) {
   total_pay_increase += salary_increase;

   return total_pay_increase;
}

void Display_employee_salary(float current_salary,float increased_salary) {
   cout << "Current salary : " << current_salary
        << " becomes : " << increased_salary << endl;
}

void Display_faculty_payroll_N_total_pay_increase(float facult_payroll_before,float facult_payroll_after, float total_pay_increase) {
   cout << "Total payroll of : " << facult_payroll_before << endl
        << "increases to become : " << facult_payroll_after << endl
        << "which amounts to an increase of : " << total_pay_increase << endl;
}

int main(){
    float number = 1,facult_payroll_before = 0, facult_payroll_after = 0, total_pay_increase = 0;

    while (number <= 4){
       float current_salary = Recieve_salary();

       float salary_increase = Calculate_salary_increase(current_salary);

       float increased_salary = Calculate_increased_salary(current_salary,salary_increase);

       facult_payroll_before = Calculate_faculty_payroll_before(facult_payroll_before,current_salary);

       facult_payroll_after = Calculate_faculty_payroll_after(facult_payroll_after,increased_salary);

       total_pay_increase = Calculate_total_pay_increase(total_pay_increase,salary_increase);

       Display_employee_salary(current_salary,increased_salary);

       cout <<"\n";

       number++;
    }

    cout << "\n"<<endl;

    Display_faculty_payroll_N_total_pay_increase(facult_payroll_before,facult_payroll_after,total_pay_increase);

    return 0;
}
