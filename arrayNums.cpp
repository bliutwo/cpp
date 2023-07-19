#include <bits/stdc++.h>
#include "common_utils.h"
using namespace std;

int multiplyAllValuesOfArray(int arr[], int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= arr[i];
    }
    return result;
}

int main() {
    int n = 9;
    char arr[n] = {'9', '1', '2', '3', '4', '5', '6', '7', '.'};
    int tracker[n] = {0};
    printArray(arr, n);
    printArray(tracker, n);
    for (int i = 0; i < n; i++) {
        if (arr[i] == '.') continue;
        int index = arr[i] - '1';
        cout << index << endl;
        tracker[index]++;
    }
    printArray(tracker, n);
    cout << multiplyAllValuesOfArray(tracker, n) << endl;
}
