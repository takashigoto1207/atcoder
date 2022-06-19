#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> p(5, 0);
  rep(i, N) {
    int A;
    cin >> A;
    p[0]++;
    for (int j = 3; 0 <= j; j--) p[min(4, j + A)] += p[j], p[j] = 0;
  }
  cout << p[4] << endl;
  return 0;
}