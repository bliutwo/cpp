#include <bits/stdc++.h>
using namespace std;

void printCharArr(char str[], int n) {
    for (int i = 0; i < n; i++) {
        cout << str[i];
    }
    cout << "\n";
}

int main() {
    // char str[] = "Hello World";
    // int n = 11;
    string s = "Hello World";
    int n = s.length();
    char str[n];
    for (int i = 0; i < n; i++) {
        str[i] = s[i];
    }
    printCharArr(str, n);
    str[0] = 'B';
    printCharArr(str, n);
    swap(str[0], str[1]);
    printCharArr(str, n);
}
