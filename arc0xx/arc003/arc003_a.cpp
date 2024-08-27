#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<char, int> mp;
  char r;
  rep(i, N) {
    cin >> r;
    mp[r]++;
  }

  map<char, int> eva;
  eva['A'] = 4;
  eva['B'] = 3;
  eva['C'] = 2;
  eva['D'] = 1;
  eva['F'] = 0;
  double calc = 0;
  for (auto x : mp) calc += eva[x.first] * x.second;

  cout << setprecision(10) << calc / N << endl;
  return 0;

}