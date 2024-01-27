#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace std;
using namespace atcoder;
using ll = long long;

int move(int d, int A, int B) {
  if (d < A)
    return A;
  else if (d <= B)
    return d;
  else
    return B;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  vector<string> s(N);
  vector<int> d(N);
  rep(i, N) cin >> s[i] >> d[i];

  int x = 0;
  rep(i, N) {
    if (s[i] == "East")
      x += move(d[i], A, B);
    else
      x -= move(d[i], A, B);
  }

  if (x < 0)
    cout << "West " << abs(x) << endl;
  else if (x > 0)
    cout << "East " << abs(x) << endl;
  else
    cout << 0 << endl;
  return 0;
}