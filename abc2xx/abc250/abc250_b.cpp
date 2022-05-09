#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  rep(i, A * N) {
    rep(j, B * N) {
      if ((i / A + j / B) % 2 == 0)
        cout << ".";
      else
        cout << "#";
    }
    cout << endl;
  }
  return 0;
}