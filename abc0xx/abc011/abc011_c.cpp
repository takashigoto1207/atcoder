#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, NG1, NG2, NG3;
  cin >> N >> NG1 >> NG2 >> NG3;

  if (N == NG1 || N == NG2 || N == NG3) {
    cout << "NO" << endl;
    return 0;
  }

  int ans = 0;
  while (N > 0) {
    if (N - 3 != NG1 && N - 3 != NG2 && N - 3 != NG3)
      N -= 3, ans++;
    else if (N - 2 != NG1 && N - 2 != NG2 && N - 2 != NG3)
      N -= 2, ans++;
    else if (N - 1 != NG1 && N - 1 != NG2 && N - 1 != NG3)
      N -= 1, ans++;
    else {
      cout << "NO" << endl;
      return 0;
    }
  }

  if (ans > 100)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  return 0;
}