//
// Created by ojasv on 05-09-2025.
//
#include <bits/stdc++.h>
using namespace std;
void checkPalindrome(int number) {
    int rev_num = 0; int orignal1 = number;
    while (number > 0) {
        rev_num = (rev_num * 10) + number % 10; number = number / 10;
    }
    if (rev_num == orignal1) {cout<< "the number is palindrome";} else cout << "the number is not palindrome";
}
int main() {
    checkPalindrome(121);
}