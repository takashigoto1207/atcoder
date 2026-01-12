#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int solve(int n) {
  string str = to_string(n);
  int res = 0;
  for (char c : str) res += (c - '0') * (c - '0');
  return res;
}

int main() {
  int N;
  cin >> N;

  set<int> his;
  while (N > 1) {
    if (his.find(N) != his.end()) {
      cout << "No" << endl;
      return 0;
    }
    his.insert(N);
    N = solve(N);
  }

  cout << "Yes" << endl;
  return 0;
}