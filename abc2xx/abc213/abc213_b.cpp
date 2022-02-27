#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> A(N);
  rep(i, N) cin >> A[i].first, A[i].second = i + 1;

  sort(A.begin(), A.end());
  cout << A[N - 2].second << endl;
  return 0;
}