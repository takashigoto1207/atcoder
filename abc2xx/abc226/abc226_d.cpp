#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  int N;
  cin >> N;

  vector<int> x(N), y(N);
  rep(i, N) cin >> x[i] >> y[i];

  set<pair<int, int>> st;
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      int xi = x[i] - x[j];
      int yi = y[i] - y[j];
      int g = gcd(abs(xi), abs(yi));
      st.insert(pair<int, int>(xi / g, yi / g));

      xi = x[j] - x[i];
      yi = y[j] - y[i];
      g = gcd(abs(xi), abs(yi));
      st.insert(pair<int, int>(xi / g, yi / g));
    }
  }
  cout << st.size() << endl;
  return 0;
}