#include <bits/stdc++.h>
#include "common_utils.h"
using namespace std;


class Codec {
private:
    string separator = "asdfghjkl";
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string s = "";
        for (int i = 0; i < strs.size() - 1; i++) {
            s += strs[i];
            s += separator;
        }
        s += strs[strs.size() - 1];
        return s;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> v;
        // s.find(separator);
        return v;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));


int main() {
    vector<string> strs = {"Hello", "World"};
    Codec codec;
    cout << codec.encode(strs) << endl;
    vector<string> ans = codec.decode(codec.encode(strs));
    printVector(ans);
    return 0;
}
