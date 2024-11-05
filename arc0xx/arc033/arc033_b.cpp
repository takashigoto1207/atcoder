#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int NA, NB;
  cin >> NA >> NB;

  int A, B;
  map<int, int> mp;
  rep(i, NA) {
    cin >> A;
    mp[A]++;
  }
  rep(i, NB) {
    cin >> B;
    mp[B]++;
  }

  int aorb = 0, aandb = 0;
  for (auto x : mp) {
    if (x.second >= 1) aorb++;
    if (x.second == 2) aandb++;
  }
  cout << fixed << setprecision(6) << (double)aandb / aorb << endl;
  return 0;
}