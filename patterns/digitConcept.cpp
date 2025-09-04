//
// Created by ojasv on 04-09-2025.
//
#include<bits/stdc++.h>
using namespace std;

int DigitExtraction(int number) {
    cout << "NUmber entered by the user: " << number << endl;
    while (number > 0) {
        int LastDigit = number % 10;
        cout << "Last Digit of the number is: "<< LastDigit << endl;
        number = number / 10;
        cout << " Second Last Digit of the number is: "<< number << endl;
    }
    return 0;
}

int main() {
    int x = DigitExtraction(1231);
    return 0;
}
