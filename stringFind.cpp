#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Helloasdfworld!";
    string substring = "asdf";
    size_t index = s.find(substring);
    cout << "0123456789" << endl;
    cout << s << endl;
    cout << index << endl;
    size_t end = index + substring.length();
    cout << end << endl;
    string newSub = s.substr(index, substring.length());
    cout << newSub << endl;
    return 0;
}
