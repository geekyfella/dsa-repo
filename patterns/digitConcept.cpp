#include<bits/stdc++.h>
using namespace std;

int DigitExtraction(int number) {
    cout << "Number entered by the user: " << number << endl;
    while (number > 0) {
        int LastDigit = number % 10;
        cout << "Last Digit: "<< LastDigit << endl;
        number = number / 10;
    }
}

int main() {
    cout << DigitExtraction(10) << endl;
    return 0;
}
