#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
const int mod = 10007;

int main() {
  int n;
  cin >> n;

  vector<int> A(n);
  A[0] = 0;
  A[1] = 0;
  A[2] = 1;
  for (int i = 3; i < n; i++) A[i] = (A[i - 3] + A[i - 2] + A[i - 1]) % mod;
  cout << A[n - 1] << endl;
  return 0;
}