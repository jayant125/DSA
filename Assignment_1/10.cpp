// 10. Explain the difference between x++ and ++x in your own words.
// • Take an integer as input and:
// • Print its value using post-increment (x++).
// • Print its value again using pre-increment (++x).
#include<iostream>
using namespace std;
int main(){
    int x = 10;
    cout << x++ <<endl; // First Print Then Increment
    cout << ++x << endl; // First Increment Then Print
    return 0;
}

// 10 and 12
