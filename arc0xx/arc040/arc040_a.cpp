#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int r = 0;
  int b = 0;
  string S;
  rep(i, N) {
    cin >> S;
    r += count(S.begin(), S.end(), 'R');
    b += count(S.begin(), S.end(), 'B');
  }

  if (r > b)
    cout << "TAKAHASHI" << endl;
  else if (r < b)
    cout << "AOKI" << endl;
  else
    cout << "DRAW" << endl;
  return 0;
}