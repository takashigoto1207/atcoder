#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];

  int cnt1 = 0, cnt2 = 0;
  rep(i, N) if (A[i] == B[i]) cnt1++;
  rep(i, N) rep(j, N) if (A[i] == B[j] && i != j) cnt2++;

  cout << cnt1 << endl;
  cout << cnt2 << endl;
  return 0;
}