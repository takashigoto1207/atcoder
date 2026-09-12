#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> x(3, 0);
  int A;
  rep(i, N) {
    cin >> A;
    int calc = (A + 999) / 1000 * 1000 - A;
    x[2] += calc / 100;
    x[1] += calc / 10 % 10;
    x[0] += calc % 10;
  }

  rep(i, 3) cout << x[i] << " ";
  cout << endl;
  return 0;
}