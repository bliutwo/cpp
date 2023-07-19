#include <bits/stdc++.h>
#include "common_utils.h"
using namespace std;

void sortVectorInts() {
    vector<int> v = {0, 1, 2, 4, 3};
    printVector(v);
    sort(v.begin(), v.end());
    printVector(v);
    sort(v.begin(), v.end(), greater<int>());
    printVector(v);
}

void sortVectorStrings() {
    vector<string> v = {"Alice", "Charlie", "Bob"};
    printVector(v);
    sort(v.begin(), v.end());
    printVector(v);
    sort(v.begin(), v.end(), greater<string>());
    printVector(v);
}

int main() {
    sortVectorInts();
    sortVectorStrings();
    return 0;
}
