#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

bool check(vector<int> a, vector<int> b, int n) {
  rep(i, n) if (a[i] != b[i]) return false;
  return true;
}

int main() {
  int N;
  cin >> N;

  vector<int> P(N);
  vector<int> Q(N);
  vector<int> v(N);
  rep(i, N) cin >> P[i];
  rep(i, N) cin >> Q[i];

  rep(i, N) v[i] = i + 1;
  int op = 0;
  int oq = 0;
  int cnt = 1;
  do {
    if (check(P, v, N)) op = cnt;
    if (check(Q, v, N)) oq = cnt;
    cnt++;
  } while (next_permutation(v.begin(), v.end()));

  cout << abs(op - oq) << endl;
  return 0;
}