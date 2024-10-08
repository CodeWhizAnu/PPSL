#include <iostream>

using namespace std;

int main() {
int n, sum = 0;
// Input the value of n from the user
cout << "Enter a positive integer: ";
cin >> n;
// Calculate the sum of natural numbers from 1 to n
for (int i = 1; i <= n; i++) {
sum += i;
}
// Display the result
cout << "The sum of natural numbers from 1 to " << n << " is: " <<
sum << endl;
return 0;
}

