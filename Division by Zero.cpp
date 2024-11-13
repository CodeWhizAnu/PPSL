#include <iostream>
using namespace std;

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero error!"); // Use std::runtime_error instead of const char*
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int num, denom;
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> denom;

    try {
        double result = divide(num, denom);
        cout << "Result: " << result << endl;
    }
    catch (const exception& e) { // Catch std::exception instead of const char*
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
