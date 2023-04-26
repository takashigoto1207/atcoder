#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  int m1 = 0;
  int m2 = 0;
  int cnt = 0;

  rep(i, N) cin >> A[i];
  rep(i, N) {
    if (A[i] > m1) {
      m2 = m1;
      m1 = A[i];
      cnt = 1;
    } else if (m1 == A[i]) {
      cnt++;
    } else if (A[i] > m2) {
      m2 = A[i];
    }
  }

  rep(i, N) {
    if (A[i] == m1 && cnt == 1)
      cout << m2 << endl;
    else
      cout << m1 << endl;
  }
  return 0;
}