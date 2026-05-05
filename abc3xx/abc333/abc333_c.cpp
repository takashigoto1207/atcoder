#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> repunits;
  for (ll i = 1; i < 1e12; i = i * 10 + 1) repunits.push_back(i);

  vector<ll> x;
  for (ll i : repunits)
    for (ll j : repunits)
      for (ll k : repunits) x.push_back(i + j + k);
  sort(x.begin(), x.end());
  x.erase(unique(x.begin(), x.end()), x.end());
  cout << x[N - 1] << endl;
  return 0;
}