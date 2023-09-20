#include <bits/stdc++.h>
#include "common_utils.h"
using namespace std;

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    vector<pair<int, int>> indexToSum;
    for (size_t i = 0; i < mat.size(); i++) {
        pair<int, int> p;
        int total = 0;
        for (size_t j = 0; j < mat[i].size(); j++) {
            total += mat[i][j];
        }
        p.first = (int)i;
        p.second = total;
        indexToSum.push_back(p);
    }
    sort(indexToSum.begin(), indexToSum.end(), [](auto &left, auto &right) {
        if (left.second == right.second) {
            return left.first < right.first;
        } else {
            return left.second < right.second;
        }
    });
    vector<int> ans;
    for (size_t i = 0; i < (size_t)k; i++) {
        if (i < indexToSum.size())
            ans.push_back(indexToSum[i].first);
    }
    return ans;
}

int main() {
    cout << "Hello world!" << endl;
    vector<vector<int>> arr = {
        {1, 1, 0, 0, 0},
        {1, 1, 1, 1, 0},
        {1, 0, 0, 0, 0},
        {1, 1, 0, 0, 0},
        {1, 1, 1, 1, 1}
    };
    // vector<vector<int>> arr = {
    //     {1, 0, 0, 0},
    //     {1, 1, 1, 1},
    //     {1, 0, 0, 0},
    //     {1, 0, 0, 0},
    //     {1, 0, 0, 0}
    // };
    vector<int> ans = kWeakestRows(arr, 3);
    printVector(ans);
    return 0;
}
