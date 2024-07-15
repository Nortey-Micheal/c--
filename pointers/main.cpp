#include <iostream>

using namespace std;

int main()
{
    float num = 5.6;
    float& p_num = num;



    //float* d_p_num = ;
    /*


    cout << "Address of num is " << p_num <<endl
         << "Value of num is : " << *p_num<<"\n";
    cout << "Address of d_p_num is " << d_p_num <<endl
         << "Value of d_p_num is : " << *d_p_num;


    delete d_p_num;
    d_p_num = nullptr;
    */

    cout << "Address of num is " << &num <<endl
         << "Value of num is : " << num<<"\n";
    cout << "=====================================\n";
    cout << "Address of p_num is " << &p_num <<endl
         << "Value of p_num is : " << p_num;

    return 0;
}
