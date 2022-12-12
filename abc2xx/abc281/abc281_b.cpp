#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

bool is_digit(char c) { return '0' <= c && c <= '9'; }

int main() {
  string S;
  cin >> S;

  bool f = true;
  if (S.size() != 8 || !isupper(S[0]) || !isupper(S[S.size() - 1]) ||
      S[1] == '0')
    f = false;
  for (int i = 1; i < 7; i++)
    if (!is_digit(S[i])) f = false;

  cout << (f ? "Yes" : "No") << endl;
  return 0;
}