#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  string N;
  cin >> N;

  rep(i, 10) {
    string tmp = N;
    reverse(tmp.begin(), tmp.end());
    if (N == tmp) {
      cout << "Yes" << endl;
      return 0;
    }
    N = '0' + N;
  }

  cout << "No" << endl;
  return 0;
}