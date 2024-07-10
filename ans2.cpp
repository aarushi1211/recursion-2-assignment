#include <iostream>
#include <cmath>
using namespace std;
int numberOfDigits(int n) {
if (n == 0) {
return 0;
}
return 1 + numberOfDigits(n / 10);
}
int reerseNumber(int n, int digits) {
if (n == 0) {
return 0;
}
return (n % 10) * pow(10, digits - 1) + reerseNumber(n / 10, digits - 1);
}
int main() {
int n;
cout << "Enter a positie integer: ";
cin >> n;
int digits = numberOfDigits(n);
int reersedNumber = reerseNumber(n, digits);
cout << "he reerse of " << n << " is: " << reersedNumber << endl;
return 0;
}