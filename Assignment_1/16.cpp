// 16. Given 2 fractions, find the sum of those 2 fractions.Take the numerator and
// denominator values of the fractions from the user.
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int num1, den1, num2, den2;
    cout << "Enter numerator and denominator of first fraction: ";
    cin >> num1 >> den1;
    cout << "Enter numerator and denominator of second fraction: ";
    cin >> num2 >> den2;
    int commonDenominator = den1 * den2;
    int newNumerator = (num1 * den2) + (num2 * den1);
    int commonFactor = gcd(newNumerator, commonDenominator);
    newNumerator /= commonFactor;
    commonDenominator /= commonFactor;
    cout << "Sum of fractions = " << newNumerator << "/" << commonDenominator << endl;

    return 0;
}
