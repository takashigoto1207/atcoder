#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

double dp[101][101][101];

double f(int a, int b, int c) {
  if (dp[a][b][c]) return dp[a][b][c];
  if (a == 100 || b == 100 || c == 100) return 0;
  double ans = 0;
  ans += (f(a + 1, b, c) + 1) * a / (a + b + c);
  ans += (f(a, b + 1, c) + 1) * b / (a + b + c);
  ans += (f(a, b, c + 1) + 1) * c / (a + b + c);
  dp[a][b][c] = ans;
  return ans;
}

int main() {
  double A, B, C;
  cin >> A >> B >> C;

  cout << setprecision(10) << f(A, B, C) << endl;
  return 0;
}