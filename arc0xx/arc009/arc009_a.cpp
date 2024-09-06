#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int a, b;
  int ans = 0;
  rep(i, N) {
    cin >> a >> b;
    ans += a * b;
  }

  cout << (int)(ans * 1.05) << endl;
  return 0;
}