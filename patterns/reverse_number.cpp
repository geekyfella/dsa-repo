//
// Created by ojasv on 05-09-2025.
//
#include <bits/stdc++.h>
using namespace std;

int ReverseNumber(int number) {
    int rev_num = 0;
    while (number > 0) {
        int last_digit = number % 10;
        rev_num = (rev_num * 10) + last_digit;
        number = number / 10;
    }
    return rev_num;
}
int main() {
    cout <<"reverse of number: " << ReverseNumber(-314) << endl;
    return 0;
}
