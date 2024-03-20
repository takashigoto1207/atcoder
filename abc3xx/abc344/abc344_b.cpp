#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<int> A;
  while (true) {
    int ai;
    cin >> ai;
    A.push_back(ai);
    if (ai == 0) break;
  }
  rep(i, A.size()) cout << A[A.size() - i - 1] << endl;
  return 0;
}