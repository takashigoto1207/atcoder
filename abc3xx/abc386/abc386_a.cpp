#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<int> A(4);
  rep(i, 4) cin >> A[i];
  sort(A.begin(), A.end());

  if (A[0] == A[1] && A[1] == A[2] && A[2] != A[3]) {
    cout << "Yes" << endl;
    return 0;
  }
  if (A[0] != A[1] && A[1] == A[2] && A[2] == A[3]) {
    cout << "Yes" << endl;
    return 0;
  }
  if (A[0] == A[1] && A[1] != A[2] && A[2] == A[3]) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}