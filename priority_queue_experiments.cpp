#include <bits/stdc++.h>
#include "common_utils.h"
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    pq.pop();
    return 0;
}
