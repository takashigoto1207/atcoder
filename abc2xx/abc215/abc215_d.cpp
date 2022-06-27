#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  int L = 1000001;
  vector<bool> x(L, false);
  rep(i, N) {
    int A;
    cin >> A;
    x[A] = true;
  }

  vector<int> d;
  for (int i = 2; i < L; i++) {
    bool flag = false;
    for (int j = i; j < L; j += i) {
      if (x[j]) flag = true;
    }
    if (flag) d.push_back(i);
  }
  vector<bool> ans(M + 1, true);
  for (int i : d) {
    for (int j = i; j <= M; j += i) ans[j] = false;
  }

  int cnt = 0;
  for (int i = 1; i <= M; i++)
    if (ans[i]) cnt++;
  cout << cnt << endl;
  for (int i = 1; i <= M; i++)
    if (ans[i]) cout << i << endl;
  return 0;
}