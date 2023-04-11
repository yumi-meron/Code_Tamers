#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3, largest;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    cout << "The largest number is " << largest << endl;

    return 0;
}

