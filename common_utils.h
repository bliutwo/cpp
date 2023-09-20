#include <bits/stdc++.h>
using namespace std;

template <class T> void printVector(vector<T>& v) {
    if (v.empty()) {
        cout << "{ }\n";
        return;
    }
    cout << "{ ";
    for (size_t i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << " }\n";
}

template <class T> void printArray(T arr[], int n) {
    cout << "{ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "}\n";
}
