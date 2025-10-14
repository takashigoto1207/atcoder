#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int calc(int x) {
  int res = 0;
  while (x) {
    res += x % 10;
    x /= 10;
  }
  return res;
}

int main() {
  int N;
  cin >> N;

  vector<int> A(N + 1, 0);
  A[0] = 1;

  for (int i = 1; i <= N; i++) rep(j, i) A[i] += calc(A[j]);

  cout << A[N] << endl;
  return 0;
}