#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<pair<int, string>> mem(N);
  for (int i = 0; i < N; i++) cin >> mem[i].second >> mem[i].first;
  sort(mem.rbegin(), mem.rend());
  cout << mem[1].second << endl;
  return 0;
}