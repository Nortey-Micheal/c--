#include <iostream>
#include <string>
using namespace std;

int main(){
   int num;
   cout <<"Enter num : ";
   cin>> num;
   string news = to_string(num);
   for(int i = news.length();i >= 0;i--){
      cout<<news[i];
   }
   return 0;
}
