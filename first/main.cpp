#include <iostream>

using namespace std;

class Member {
    private:
          string name;
    public:
          string work;
    Member(string aName, string aWork){
          name = aName;
          work = aWork;
    }

    string getName(){
          return name;
    }

    void setName(string bName){
          name = bName;
    }
};

int main() {
   Member Kofi("Kofi","AV Dept.");
   cout << Kofi.getName()<<endl;
   cout << Kofi.work;
   return 0;
}
