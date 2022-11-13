#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  rep(i, N) cin >> S[i];

  rep(i, N) for (int j = 0; j < i; j++) if (S[i] == S[j]) {
    cout << "No" << endl;
    return 0;
  }
  string s1 = "HDCS";
  string s2 = "A23456789TJQK";
  rep(i, N) {
    if (!count(s1.begin(), s1.end(), S[i][0]) ||
        !count(s2.begin(), s2.end(), S[i][1])) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}