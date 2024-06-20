#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, A;
  cin >> N;

  int mem = 1;
  int cnt = 0;
  rep(i, N) {
    cin >> A;
    if (A != mem)
      cnt++;
    else
      mem++;
  }
  cout << (cnt == N ? -1 : cnt) << endl;
  return 0;
}