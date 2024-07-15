#include <iostream>

using namespace std;

float Get_initial_balance() {
    float initial_balance;

    cout << "Please enter the initial amount of money in your account : ";
    cin >> initial_balance;

    return initial_balance;
}

float Get_transaction_amount() {
    float transaction_amount;

    cout << "Please enter a transaction amount : ";
    cin >> transaction_amount;

    return transaction_amount;
}

char Get_transaction_code() {
   char transaction_code;

   cout << "Please enter a code for the transaction i.e. 'D' for 'deposit,"
        << " 'C' for 'Cheque' and 'Q' to 'Quit or End': ";
   cin >> transaction_code;

   return transaction_code;
}

bool isTransacCodeValid(char transaction_code) {
    if (transaction_code == 'D' || transaction_code == 'd' ||
        transaction_code == 'C' || transaction_code == 'c') {
          return true;
    } else if (transaction_code == 'Q' || transaction_code == 'q') {
          cout << "End of the programme." << endl;
          return false;
    } else {
          cout << "Invalid transaction code entered." << endl;
          return false;
    }
}

float Calculate_new_balance(float new_balance,float transaction_amount,char transaction_code) {

    if(transaction_code == 'C' || transaction_code == 'c') {
       new_balance = new_balance - transaction_amount;
    } else if (transaction_code == 'D' || transaction_code == 'd') {
       new_balance = new_balance + transaction_amount;
    }

    return new_balance;
}

bool isNewBalanceValid(float new_balance) {
   if (new_balance < 0) {
      return false;
   } else {
      return true;
   }
}



void Display_new_balance(float new_balance) {
    cout << "Your current balance becomes : "<< new_balance << endl << "\n";
}

void Display_balances_N_counts(float initial_balance,float new_balance,int num_of_deposits,int num_of_cheques) {
   cout << "Your initial balance was : " << initial_balance << endl
        << "Your current balance is  : " << new_balance << endl
        << "The number of deposits made so far are : " << num_of_deposits << endl
        << "The number of cheques withdrawn are : " << num_of_cheques << endl;
}

int main(){
    int num_of_deposits = 0,num_of_cheques = 0;

    float initial_balance = Get_initial_balance();
    cout << "\n";
    float new_balance = initial_balance;
    cout << "----------------- NEW TRANSACTION -------------------"<< "\n"<<endl;
    char transaction_code = Get_transaction_code();
    cout << "\n";

    while (isTransacCodeValid(transaction_code)) {
         float transaction_amount = Get_transaction_amount();
         cout << "\n";
         new_balance = Calculate_new_balance(new_balance,transaction_amount,transaction_code);
         Display_new_balance(new_balance);
         cout << "\n";

         if(!isNewBalanceValid(new_balance)){
            cout << "You have taken more than you have. You owe the bank now."<<endl;
         }

         if(transaction_code == 'c' || transaction_code == 'C') {
            num_of_cheques++;
         } else if (transaction_code == 'd' || transaction_code == 'D') {
            num_of_deposits++;
         }

         cout << "----------------- NEW TRANSACTION -------------------"<< "\n"<<endl;

         transaction_code = Get_transaction_code();
    }

    cout <<"\n" <<"----------------- END OF ALL TRANSACTIONS -------------------"<< "\n"<<endl;

    Display_balances_N_counts(initial_balance,new_balance,num_of_deposits,num_of_cheques);

    return 0;
}
