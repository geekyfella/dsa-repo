#include<bits/stdc++.h>
using namespace std;

int DigitExtraction(int number) {
    cout << "NUmber entered by the user: " << number << endl;
    while (number > 0) {
        int LastDigit = number % 10;
        cout << "Last Digit: "<< LastDigit << endl;
        number = number / 10;
        cout << " Second Last Digit: "<< number << endl;
    }
    return 0;
}

int main() {
    int x = DigitExtraction(1231);
    return 0;
}
