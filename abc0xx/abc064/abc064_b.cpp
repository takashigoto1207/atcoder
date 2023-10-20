#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int a;
  int min_a = INT_MAX;
  int max_a = INT_MIN;
  rep(i, N) {
    cin >> a;
    max_a = max(max_a, a);
    min_a = min(min_a, a);
  }
  cout << max_a - min_a << endl;
  return 0;
}