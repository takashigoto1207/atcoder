#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  map<ll, int> mp3, mp5;
  ll calc = 3, i = 1;
  while (calc < N) mp3[calc] = i, calc *= 3, i++;
  calc = 5, i = 1;
  while (calc < N) mp5[calc] = i, calc *= 5, i++;

  for (auto x : mp3)
    if (mp5[N - x.first] != 0) {
      cout << mp3[x.first] << " " << mp5[N - x.first] << endl;
      return 0;
    }
  cout << -1 << endl;
  return 0;
}