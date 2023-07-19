#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello world!";
    map<char, int> m;
    for (size_t i = 0; i < s.size(); i++) {
        if (m.find(s[i]) == m.end()) {
            m[s[i]] = 1;
        } else {
            m[s[i]]++;
        }
    }
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
