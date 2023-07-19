#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, vector<string>> m;
    m[1].push_back("wow");
    for (auto e : m[1]) {
        cout << e << endl;
    }
    return 0;
}
