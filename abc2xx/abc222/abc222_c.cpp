#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  N *= 2;

  vector<string> A(N);
  vector<pair<int, int>> v(N);
  rep(i, N) cin >> A[i];

  rep(i, N) v[i] = {0, i};
  rep(i, M) {
    for (int j = 0; j < N; j += 2) {
      int k = v[j].second;
      int l = v[j + 1].second;
      if (A[k][i] != A[l][i]) {
        if ((A[k][i] == 'C' && A[l][i] == 'P') ||
            (A[k][i] == 'P' && A[l][i] == 'G') ||
            (A[k][i] == 'G' && A[l][i] == 'C'))
          v[j].first--;
        else
          v[j + 1].first--;
      }
    }
    sort(v.begin(), v.end());
  }
  rep(i, N) cout << v[i].second + 1 << endl;

  return 0;
}