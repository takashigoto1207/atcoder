#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

void dfs(int n, string s) {
  if (n == 0)
    cout << s << endl;
  else
    for (char c = 'a'; c <= 'c'; c++) dfs(n - 1, s + c);
}

int main() {
  int N;
  cin >> N;
  dfs(N, "");
  return 0;
}