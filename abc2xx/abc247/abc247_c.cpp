#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  string S = "1";
  for (int i = 2; i <= N; i++) S = S + " " + to_string(i) + " " + S;
  cout << S << endl;
  return 0;
}