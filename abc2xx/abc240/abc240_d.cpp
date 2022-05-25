#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, a, calc = 0;
  cin >> N;

  vector<pair<int, int>> stack;
  stack.emplace_back(-1, 0);
  vector<int> ans(N);

  rep(i, N) {
    cin >> a;
    calc++;

    if (stack.back().first == a)
      stack.back().second++;
    else
      stack.emplace_back(a, 1);

    if (stack.back().first == stack.back().second) {
      calc -= stack.back().second;
      stack.pop_back();
    }
    ans[i] = calc;
  }

  rep(i, N) cout << ans[i] << endl;
  return 0;
}