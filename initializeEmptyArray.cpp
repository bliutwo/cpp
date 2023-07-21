#include <bits/stdc++.h>
#include "common_utils.h"
using namespace std;

void doSomething(vector<vector<int>>& board) {
    int n = board.size();
    int tracker[n] = {0};
    printArray(tracker, n);
}


int main() {
    vector<vector<int>> board = { {0, 0}, {0, 0} };
    doSomething(board);
    return 0;
}
