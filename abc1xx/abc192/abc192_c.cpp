#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int f(int N) {
  string str = to_string(N);

  sort(str.begin(), str.end(), greater<char>());
  int g1 = stoi(str);

  sort(str.begin(), str.end());
  int g2 = stoi(str);

  return g1 - g2;
}

int main() {
  int N, K;
  cin >> N >> K;

  rep(i, K) N = f(N);

  cout << N << endl;
  return 0;
}