#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> p(N, 0);
  int a;
  rep(i, 2 * N - 2) {
    cin >> a;
    p[--a]++;
  }
  int cnt = 0;
  rep(i, N) if (p[i] != 1) cnt++;
  if (cnt > 1)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
  return 0;
}