// Write a program to find the sum of squares of first n natural numbers where n will be provided by the user.
#include<iostream>
using namespace std;
int main(){
    int n;
    long long int sum = 0;
    cout << "Enter Value of sum of squares of first n natural numbers"<<endl;
    cin >> n;
    sum = (n * (n + 1) * (2 * n + 1)) / 6;
    cout << "Sum of squares of first n natural numbers is "<<sum<<endl;
    return 0;
}
