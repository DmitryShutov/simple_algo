#include <iostream>

using namespace std;

void print_number_factors(int number) {
    int divisor = 2;
    while(number != 1) {
        if (number%divisor == 0) {
            number = number / divisor;
            cout << divisor << " ";
        } else {
            divisor++;
        }
    }
    cout << endl;
}

int main() {
    int number = 0;
    cin >> number;
    print_number_factors(number);
    return 0;
}