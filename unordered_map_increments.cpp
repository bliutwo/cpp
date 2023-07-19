#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<char, int> counts;
    string s = "Hello world!";
    for (size_t i = 0; i < s.size(); i++) {
        counts[s[i]]++;
    }
    for (auto i : counts) {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
