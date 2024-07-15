#include <iostream>
using namespace std;

int main() {
   for(int i = 1;i <= 5; i++) {
      string name;
      cout<<"Please enter your name : ";

      cin>>name;
      float score;
      cout<<"Please enter your score : ";
      cin>>score;
      if (score > 100) {
         cout<< name <<endl
             << "Error score"<<endl;
       } else if (score >= 80) {
         cout<<name<<endl
             <<score <<" "<< "A"<<endl;
       } else if (score >= 70) {
         cout<<name<<endl
             <<score<<" "<< "B"<<endl;
       } else if (score >= 60) {
         cout<<name<<endl
             <<score<< " "<< "C"<<endl;
       } else if (score >= 50) {
         cout<<name<<endl
             <<score<<" "<< "D"<<endl;
       } else {
         cout << name<<endl
              <<score<<" "<<"F"<<endl;
       }
    }
   return 0;
}
