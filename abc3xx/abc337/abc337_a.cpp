#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X, Y, aoki = 0, takahashi = 0;
  cin >> N;

  rep(i, N) {
    cin >> X >> Y;
    takahashi += X;
    aoki += Y;
  }

  if (takahashi < aoki)
    cout << "Aoki" << endl;
  else if (takahashi == aoki)
    cout << "Draw" << endl;
  else
    cout << "Takahashi" << endl;
  return 0;
}