#include<bits/stdc++.h>
using namespace std;// Created by ojasv on 26-08-2025.
//
int LinearSearch(int arr[], int target_val) {

    for (int i = 0; i < 10; i++ ) { if (target_val == arr[i]) {return i; }

        return i;
    }
    return -1;
}

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    const int target = 2;

    cout << LinearSearch(arr, target);
}