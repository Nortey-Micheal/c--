#include <iostream>
//#include <array>

using namespace std;

int main(){

    int scores[5] = {};

    float sum = 0,average = 0;

    for(int i = 0; i < 5; i++) {
       cout << "Please enter the score of subject number " << i + 1<<" : ";
       cin >> scores[i];
    }

    for(int i = 0; i < 5; i++) {
       sum += scores[i];
    }

    average = sum / 5;

    cout << "Average is equal to : " << average;

    return 0;
}
