// Take a floating-point number as input, typecast it into an integer, and print both values.
#include<iostream>
using namespace std;
int main(){
    float num;
    cout << "Enter Floating Point Number: "<<endl;
    cin >> num;
    int int_num = (int)num;
    cout << "Floating Point Number: "<<num<<endl;
    cout << "Integer Number: "<<int_num<<endl;
    return 0;
}
