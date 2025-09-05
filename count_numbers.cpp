//
// Created by ojasv on 05-09-2025.
//
#include <bits/stdc++.h>
using namespace std;

int CountNumbers(int number) {
    int counter = 0;
    while (number > 0) {
        int LstDigit = number % 10;
        counter++;
        number  = number / 10;
    }
    return counter;
}
int main() {
    cout << "total count of digit: " << CountNumbers(12331) << endl;
    return 0;
}