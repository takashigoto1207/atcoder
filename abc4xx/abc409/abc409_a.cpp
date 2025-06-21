#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string T, A;
  cin >> N >> T >> A;

  rep(i, N) if (T[i] == 'o' && A[i] == 'o') {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}