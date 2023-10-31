#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string A, B, C;
  cin >> A >> B >> C;

  if (A[A.size() - 1] == B[0] && B[B.size() - 1] == C[0])
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}