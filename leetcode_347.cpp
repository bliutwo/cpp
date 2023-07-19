#include <bits/stdc++.h>
#include "common_utils.h"
using namespace std;

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    unordered_map<int, int> numToCount;
    for (int i = 0; i < nums.size(); i++) {
        numToCount[nums[i]]++;
    }
    priority_queue<pair<int, int>> pq;
    // cout << "count, num" << endl;
    for (auto it : numToCount) {
        // it.first  - element
        // it.second - count
        pq.push(make_pair(it.second, it.first));
        // cout << "{" << it.second << " " << it.first << "}" << endl;
    }

    // while (!pq.empty()) {
    //     cout << pq.top().first << endl;
    //     pq.pop();
    // }

    vector<int> ans;
    for (int i = 0; i < k; i++) {
        ans.emplace_back(pq.top().second);
        pq.pop();
    }
    printVector(ans);
    return 0;
}
