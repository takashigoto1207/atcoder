#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int v = (N + 1) / 2;
  int t = 0, a = 0;
  rep(i, N) {
    if (S[i] == 'T')
      t++;
    else
      a++;

    if (a == v) {
      cout << "A" << endl;
      return 0;
    }
    if (t == v) {
      cout << "T" << endl;
      return 0;
    }
  }
  return 0;
}