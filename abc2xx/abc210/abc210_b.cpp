#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  rep(i, N) {
    if (S[i] == '1') {
      if (i % 2 == 0)
        cout << "Takahashi" << endl;
      else
        cout << "Aoki" << endl;
      return 0;
    }
  }
  return 0;
}