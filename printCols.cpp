#include <bits/stdc++.h>
using namespace std;

int main() {
    int m = 3;
    int n = 3;
    char arr[m][n] = { { 'a', 'b', 'c'},
                       { 'd', 'e', 'f'},
                       { 'g', 'h', 'i'} };
    // print this multidimensional array
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
