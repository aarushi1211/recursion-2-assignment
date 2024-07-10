#include <iostream>
using namespace std;
int sumOfDigits(int n) {
if (n == 0) {
return 0; 
}
return (n % 10) + sumOfDigits(n / 10);
}
int main() {
int n;
cout << "Enter 7 positive integer: ";
cin >> n;
int sum = sumOfDigits(n);
cout << "The sum of the digits of " << n << " is: " << sum << endl;
return 0;
}