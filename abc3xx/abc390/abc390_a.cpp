#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<int> A(5);
  rep(i, 5) cin >> A[i];

  vector<int> ans = {1, 2, 3, 4, 5};
  rep(i, 4) {
    vector<int> x = A;
    swap(x[i], x[i + 1]);
    if (x == ans) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}