#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> list = {"and", "not", "that", "the", "you"};
  bool ans = false;
  rep(i, N) {
    string S;
    cin >> S;
    for (auto x : list)
      if (x == S) ans = true;
  }

  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}