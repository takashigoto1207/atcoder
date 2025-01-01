#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, R;
  cin >> N >> R;

  rep(i, N) {
    int D, A;
    cin >> D >> A;
    if (D == 1)
      if (1600 <= R && R <= 2799) R += A;
    if (D == 2)
      if (1200 <= R && R <= 2399) R += A;
  }
  cout << R << endl;
  return 0;
}