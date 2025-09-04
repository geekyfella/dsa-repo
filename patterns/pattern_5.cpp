//
// Created by ojasv on 01-08-2025.
//

#include "pattern_5.h"
#include <bits/stdc++.h>
using namespace std;

int main() {

    for (int i = 4, i >= 0; i--) {
        for (int j = 4; j >= i ; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}